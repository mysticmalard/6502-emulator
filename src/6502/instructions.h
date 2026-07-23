#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

enum {
    INS_ADC_IY	= 0x71,	// ADC
    INS_ADC_IX	= 0x61,
    INS_ADC_ABX	= 0x7d,
    INS_ADC_ABY	= 0x79,
    INS_ADC_ZPX	= 0x75,
    INS_ADC_IMM	= 0x69,
    INS_ADC_ZPI	= 0x72,
    INS_ADC_ABS	= 0x6d,
    INS_ADC_ZP	= 0x65,

    INS_AND_IY	= 0x31,	// AND
    INS_AND_IX	= 0x21,
    INS_AND_ABX	= 0x3d,
    INS_AND_ABY	= 0x39,
    INS_AND_ZPX	= 0x35,
    INS_AND_IMM	= 0x29,
    INS_AND_ZPI	= 0x32,
    INS_AND_ABS	= 0x2d,
    INS_AND_ZP	= 0x25,

    INS_ASL_ABX	= 0x1e,	// ASL
    INS_ASL_ZPX	= 0x16,
    INS_ASL_ACC	= 0x0a,
    INS_ASL_ABS	= 0x0e,
    INS_ASL_ZP	= 0x06,

    INS_BCC		= 0x90,	// BCC

    INS_BCS		= 0xB0,	// BCS

    INS_BEQ		= 0xF0,	// BEQ

    INS_BIT_ABX	= 0x3c,	// BIT
    INS_BIT_ZPX	= 0x34,
    INS_BIT_IMM	= 0x89,
    INS_BIT_ABS	= 0x2c,
    INS_BIT_ZP	= 0x24,

    INS_BMI		= 0x30,	// BMI

    INS_BNE		= 0xD0,	// BNE

    INS_BPL		= 0x10,	// BPL

    INS_BRA		= 0x80,	// BRA

    INS_BRK		= 0x00,	// BRK

    INS_BVC		= 0x50,	// BVC

    INS_BVS		= 0x70,	// BVS

    INS_CLC		= 0x18,	// CLC

    INS_CLD		= 0xD8,	// CLD

    INS_CLI		= 0x58,	// CLI

    INS_CLV		= 0xB8,	// CLV

    INS_CMP_IY	= 0xd1,	// CMP
    INS_CMP_IX	= 0xc1,
    INS_CMP_ABX	= 0xdd,
    INS_CMP_ABY	= 0xd9,
    INS_CMP_ZPX	= 0xd5,
    INS_CMP_IMM	= 0xc9,
    INS_CMP_ZPI	= 0xd2,
    INS_CMP_ABS	= 0xcd,
    INS_CMP_ZP	= 0xc5,

    INS_CPX_IMM	= 0xe0,	// CPX
    INS_CPX_ABS	= 0xec,
    INS_CPX_ZP	= 0xe4,

    INS_CPY_IMM	= 0xc0,	// CPY
    INS_CPY_ABS	= 0xcc,
    INS_CPY_ZP	= 0xc4,

    INS_DEC_ABX	= 0xde,	// DEC
    INS_DEC_ZPX	= 0xd6,
    INS_DEC_ACC	= 0x3a,
    INS_DEC_ABS	= 0xce,
    INS_DEC_ZP	= 0xc6,

    INS_DEX		= 0xCA,	// DEX

    INS_DEY		= 0x88,	// DEY

    INS_EOR_IY	= 0x51,	// EOR
    INS_EOR_IX	= 0x41,
    INS_EOR_ABX	= 0x5d,
    INS_EOR_ABY	= 0x59,
    INS_EOR_ZPX	= 0x55,
    INS_EOR_IMM	= 0x49,
    INS_EOR_ZPI	= 0x52,
    INS_EOR_ABS	= 0x4d,
    INS_EOR_ZP	= 0x45,

    INS_INC_ABX	= 0xfe,	// INC
    INS_INC_ZPX	= 0xf6,
    INS_INC_ACC	= 0x1a,
    INS_INC_ABS	= 0xee,
    INS_INC_ZP	= 0xe6,

    INS_INX		= 0xE8,	// INX

    INS_INY		= 0xC8,	// INY

    INS_JMP_IDX	= 0x7c,	// JMP
    INS_JMP_IND	= 0x6c,
    INS_JMP_ABS	= 0x4c,

    INS_JSR		= 0x20,	// JSR

    INS_LDA_IY	= 0xb1,	// LDA
    INS_LDA_IX	= 0xa1,
    INS_LDA_ABX	= 0xbd,
    INS_LDA_ABY	= 0xb9,
    INS_LDA_ZPX	= 0xb5,
    INS_LDA_IMM	= 0xa9,
    INS_LDA_ZPI	= 0xb2,
    INS_LDA_ABS	= 0xad,
    INS_LDA_ZP	= 0xa5,

    INS_LDX_ABY	= 0xbe,	// LDX
    INS_LDX_ZPY	= 0xb6,
    INS_LDX_IMM	= 0xa2,
    INS_LDX_ABS	= 0xae,
    INS_LDX_ZP	= 0xa6,

    INS_LDY_ABX	= 0xbc,	// LDY
    INS_LDY_ZPX	= 0xb4,
    INS_LDY_IMM	= 0xa0,
    INS_LDY_ABS	= 0xac,
    INS_LDY_ZP	= 0xa4,

    INS_LSR_ABX	= 0x5e,	// LSR
    INS_LSR_ZPX	= 0x56,
    INS_LSR_ACC	= 0x4a,
    INS_LSR_ABS	= 0x4e,
    INS_LSR_ZP	= 0x46,

    INS_NOP		= 0xEA,	// NOP

    INS_ORA_IY	= 0x11,	// ORA
    INS_ORA_IX	= 0x01,
    INS_ORA_ABX	= 0x1d,
    INS_ORA_ABY	= 0x19,
    INS_ORA_ZPX	= 0x15,
    INS_ORA_IMM	= 0x09,
    INS_ORA_ZPI	= 0x12,
    INS_ORA_ABS	= 0x0d,
    INS_ORA_ZP	= 0x05,

    INS_PHA		= 0x48,	// PHA

    INS_PHP		= 0x08,	// PHP

    INS_PHX		= 0xDA,	// PHX

    INS_PHY		= 0x5A,	// PHY

    INS_PLA		= 0x68,	// PLA

    INS_PLP		= 0x28,	// PLP

    INS_PLX		= 0xFA,	// PLX

    INS_PLY		= 0x7A,	// PLY

    INS_ROL_ABX	= 0x3e,	// ROL
    INS_ROL_ZPX	= 0x36,
    INS_ROL_ACC	= 0x2a,
    INS_ROL_ABS	= 0x2e,
    INS_ROL_ZP	= 0x26,

    INS_ROR_ABX	= 0x7e,	// ROR
    INS_ROR_ZPX	= 0x76,
    INS_ROR_ACC	= 0x6a,
    INS_ROR_ABS	= 0x6e,
    INS_ROR_ZP	= 0x66,

    INS_RTI		= 0x40,	// RTI

    INS_RTS		= 0x60,	// RTS

    INS_SBC_IY	= 0xf1,	// SBC
    INS_SBC_IX	= 0xe1,
    INS_SBC_ABX	= 0xfd,
    INS_SBC_ABY	= 0xf9,
    INS_SBC_ZPX	= 0xf5,
    INS_SBC_IMM	= 0xe9,
    INS_SBC_ZPI	= 0xf2,
    INS_SBC_ABS	= 0xed,
    INS_SBC_ZP	= 0xe5,

    INS_SEC		= 0x38,	// SEC

    INS_SED		= 0xF8,	// SED

    INS_SEI		= 0x78,	// SEI

    INS_STA_IY	= 0x91,	// STA
    INS_STA_IX	= 0x81,
    INS_STA_ABX	= 0x9d,
    INS_STA_ABY	= 0x99,
    INS_STA_ZPX	= 0x95,
    INS_STA_ZPI	= 0x92,
    INS_STA_ABS	= 0x8d,
    INS_STA_ZP	= 0x85,

    INS_STP		= 0xDB,	// STP

    INS_STX_ZPY	= 0x96,	// STX
    INS_STX_ABS	= 0x8e,
    INS_STX_ZP	= 0x86,

    INS_STY_ZPX	= 0x94,	// STY
    INS_STY_ABS	= 0x8c,
    INS_STY_ZP	= 0x84,

    INS_STZ_ABX	= 0x9e,	// STZ
    INS_STZ_ZPX	= 0x74,
    INS_STZ_ABS	= 0x9c,
    INS_STZ_ZP	= 0x64,

    INS_TAX		= 0xAA,	// TAX

    INS_TAY		= 0xA8,	// TAY

    INS_TRB_ABS	= 0x1c,	// TRB
    INS_TRB_ZP	= 0x14,

    INS_TSB_ABS	= 0x0c,	// TSB
    INS_TSB_ZP	= 0x04,

    INS_TSX		= 0xBA,	// TSX

    INS_TXA		= 0x8A,	// TXA

    INS_TXS		= 0x9A,	// TXS

    INS_TYA		= 0x98,	// TYA

    INS_WAI		= 0xCB,	// WAI
};
#endif
