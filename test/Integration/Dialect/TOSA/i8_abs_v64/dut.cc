void dut(int8_t *restrict v1, int8_t *restrict v2) {
  v64int8 v3 = broadcast_zero_s8();
  size_t v4 = 0;
  size_t v5 = 1024;
  size_t v6 = 64;
  for (size_t v7 = v4; v7 < v5; v7 += v6)
    chess_prepare_for_pipelining chess_loop_range(16, 16) {
      v64int8 v8 = *(v64int8 *)(v1 + v7);
      uint64_t v9 = gt(v8, v3);
      v64int8 v10 = sub(v3, v8);
      v64int8 v11 = sel(v10, v8, v9);
      *(v64int8 *)(v2 + v7) = v11;
    }
  return;
}
