#ifndef __W5100RELFUNCTIONS_H_
#define __W5100RELFUNCTIONS_H_

#include "wizchip_conf.h"

#define W5x00Address  ((uint32_t)0x60000000)

uint8_t spiReadByte(void);
void spiWriteByte(uint8_t byte);
uint8_t spiReadBurst(uint8_t* pBuf, uint16_t len);
void spiWriteBurst(uint8_t* pBuf, uint16_t len);

iodata_t busReadByte(uint32_t addr);
void busWriteByte(uint32_t addr, iodata_t data);
void busReadBurst(uint32_t addr,uint8_t* pBuf,uint32_t len);
void busWriteBurst(uint32_t addr, uint8_t* pBuf,uint32_t len);
void csEnable(void);
void csDisable(void);
void resetAssert(void);
void resetDeassert(void);

void W5x00Reset(void);
#endif
