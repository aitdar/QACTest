/* >>>------------------------------------------------------------
 *
 * File: m3cmex.h
 *
 * <<<------------------------------------------------------------ */


/* PRQA S 1011 EOF */

#ifndef M3CMEX_H
#define M3CMEX_H

#include "misra.h"

typedef enum TN1 {RED, AMBER, GREEN} N1;
typedef enum TN2 {APPLE, BANANA, PLUM} N2;

extern int16_t dir_0401(void);
extern int16_t dir_0402(void);
extern int16_t dir_0403(void);
extern int16_t dir_0404(void);
extern int16_t dir_0405(void);
extern int16_t dir_0406(void);
extern int16_t dir_0407(void);
extern int16_t dir_0408(void);
extern int16_t dir_0409(void);
extern int16_t dir_0410(void);
extern int16_t dir_0411(void);
extern int16_t dir_0412(void);
extern int16_t dir_0413(void);
extern int16_t dir_0414(void);
extern int16_t rule_0101(void);
extern int16_t rule_0102(void);
extern int16_t rule_0103(void);
extern int16_t rule_0201(void);
extern int16_t rule_0202(void);
extern int16_t rule_0203(void);
extern int16_t rule_0204(void);
extern int16_t rule_0205(void);
extern int16_t rule_0206(void);
extern int16_t rule_0207(void);
extern int16_t rule_0301(void);
extern int16_t rule_0302(void);
extern int16_t rule_0401(void);
extern int16_t rule_0402(void);
extern int16_t rule_0503(void);
extern int16_t rule_0506(void);
extern int16_t rule_0507(void);
extern int16_t rule_0508(void);
extern int16_t rule_0509(void);
extern int16_t rule_0601(void);
extern int16_t rule_0602(void);
extern int16_t rule_0701(void);
extern int16_t rule_0702(void);
extern int16_t rule_0703(void);
extern int16_t rule_0704(void);
extern int16_t rule_0801(void);
extern int16_t rule_0802(void);
extern int16_t rule_0803(void);
extern int16_t rule_0804(void);
extern int16_t rule_0805(void);
extern int16_t rule_0806(void);
extern int16_t rule_0807(void);
extern int16_t rule_0809(void);
extern int16_t rule_0810(void);
extern int16_t rule_0811(void);
extern int16_t rule_0813(void);
extern int16_t rule_0814(void);
extern int16_t rule_0901(void);
extern int16_t rule_0902(void);
extern int16_t rule_0903(void);
extern int16_t rule_0904(void);
extern int16_t rule_0905(void);
extern int16_t rule_1001_Boolean(void);
extern int16_t rule_1001_character(void);
extern int16_t rule_1001_enum(void);
extern int16_t rule_1001_floating(void);
extern int16_t rule_1001_signed(void);
extern int16_t rule_1001_unsigned(void);
extern int16_t rule_1002(void);
extern int16_t rule_1003_from_Boolean(void);
extern int16_t rule_1003_from_character(void);
extern int16_t rule_1003_from_enum(void);
extern int16_t rule_1003_from_floating(void);
extern int16_t rule_1003_from_signed(void);
extern int16_t rule_1003_from_unsigned(void);
extern int16_t rule_1003_narrow_floating(void);
extern int16_t rule_1003_narrow_signed(void);
extern int16_t rule_1003_narrow_unsigned(void);
extern int16_t rule_1003_switch(void);
extern int16_t rule_1004(void);
extern int16_t rule_1005(void);
extern int16_t rule_1006(void);
extern int16_t rule_1007(void);
extern int16_t rule_1008(void);
extern int16_t rule_1101(void);
extern int16_t rule_1102(void);
extern int16_t rule_1103(void);
extern int16_t rule_1104(void);
extern int16_t rule_1105(void);
extern int16_t rule_1106(void);
extern int16_t rule_1107(void);
extern int16_t rule_1108(void);
extern int16_t rule_1201(void);
extern int16_t rule_1202(void);
extern int16_t rule_1203(void);
extern int16_t rule_1204(void);
extern int16_t rule_1205(void);
extern int16_t rule_1301(void);
extern int16_t rule_1302(void);
extern int16_t rule_1303(void);
extern int16_t rule_1304(void);
extern int16_t rule_1305(void);
extern int16_t rule_1306(void);
extern int16_t rule_1401(void);
extern int16_t rule_1402(void);
extern int16_t rule_1403(void);
extern int16_t rule_1404(void);
extern int16_t rule_1501(void);
extern int16_t rule_1502(void);
extern int16_t rule_1504(void);
extern int16_t rule_1506(void);
extern int16_t rule_1507(void);
extern int16_t rule_1601(void);
extern int16_t rule_1602(void);
extern int16_t rule_1603(void);
extern int16_t rule_1604(void);
extern int16_t rule_1605(void);
extern int16_t rule_1606(void);
extern int16_t rule_1607(void);
extern int16_t rule_1701(void);
extern int16_t rule_1702(void);
extern int16_t rule_1703(void);
extern int16_t rule_1704(void);
extern int16_t rule_1705(void);
extern int16_t rule_1706(void);
extern int16_t rule_1707(void);
extern int16_t rule_1708(void);
extern int16_t rule_1801(void);
extern int16_t rule_1802(void);
extern int16_t rule_1803(void);
extern int16_t rule_1804(void);
extern int16_t rule_1805(void);
extern int16_t rule_1806(void);
extern int16_t rule_1807(void);
extern int16_t rule_1808(void);
extern int16_t rule_1901(void);
extern int16_t rule_1902(void);
extern int16_t rule_2001(void);
extern int16_t rule_2002(void);
extern int16_t rule_2003(void);
extern int16_t rule_2004(void);
extern int16_t rule_2005(void);
extern int16_t rule_2006(void);
extern int16_t rule_2007(void);
extern int16_t rule_2008(void);
extern int16_t rule_2009(void);
extern int16_t rule_2010(void);
extern int16_t rule_2011(void);
extern int16_t rule_2012(void);
extern int16_t rule_2013(void);
extern int16_t rule_2014(void);
extern int16_t rule_2101(void);
extern int16_t rule_2102(void);
extern int16_t rule_2103(void);
extern int16_t rule_2104(void);
extern int16_t rule_2105(void);
extern int16_t rule_2106(void);
extern int16_t rule_2107(void);
extern int16_t rule_2108(void);
extern int16_t rule_2109(void);
extern int16_t rule_2110(void);
extern int16_t rule_2111(void);
extern int16_t rule_2112(void);
extern int16_t rule_2113(void);
extern int16_t rule_2114(void);
extern int16_t rule_2115(void);
extern int16_t rule_2116(void);
extern int16_t rule_2117(void);
extern int16_t rule_2118(void);
extern int16_t rule_2119(void);
extern int16_t rule_2120(void);
extern int16_t rule_2201(void);
extern int16_t rule_2202(void);
extern int16_t rule_2203(void);
extern int16_t rule_2204(void);
extern int16_t rule_2205(void);
extern int16_t rule_2206(void);
extern int16_t rule_2207(void);
extern int16_t rule_2208(void);
extern int16_t rule_2209(void);
extern int16_t rule_2210(void);

extern int16_t bmain(void);

#endif
  

