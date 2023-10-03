#include <cstdint>

uint16_t _yr_bswap16(uint16_t x)
{
  return (x >> 8 | x << 8);
}

uint32_t _yr_bswap32(uint32_t x)
{
  return (
      (((x) &0xff000000) >> 24) | (((x) &0x00ff0000) >> 8) |
      (((x) &0x0000ff00) << 8) | (((x) &0x000000ff) << 24));
}

uint64_t _yr_bswap64(uint64_t x)
{
  return (
      (((x) &0xff00000000000000ull) >> 56) |
      (((x) &0x00ff000000000000ull) >> 40) |
      (((x) &0x0000ff0000000000ull) >> 24) |
      (((x) &0x000000ff00000000ull) >> 8) |
      (((x) &0x00000000ff000000ull) << 8) |
      (((x) &0x0000000000ff0000ull) << 24) |
      (((x) &0x000000000000ff00ull) << 40) |
      (((x) &0x00000000000000ffull) << 56));
}
