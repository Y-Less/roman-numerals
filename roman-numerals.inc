#if defined _INC_roman_numerals
	#endinput
#endif
#define _INC_roman_numerals

#if defined ROMAN_PREFIX
	#define nulla         0    // 0
	#define rN            x0   // 0

	#define rI            x1   // 1
	#define rII           x2   // 2
	#define rIII          x3   // 3
	#define rIV           x4   // 4
	#define rV            x5   // 5
	#define rVI           x6   // 6
	#define rVII          x7   // 7
	#define rVIII         x8   // 8
	#define rIX           x9   // 9
	#define rX            xA   // 10
	#define rXI           xB   // 11
	#define rXII          xC   // 12
	#define rXIII         xD   // 13
	#define rXIV          xE   // 14
	#define rXV           xF   // 15
	#define rXVI          x10  // 16
	#define rXVII         x11  // 17
	#define rXVIII        x12  // 18
	#define rXIX          x13  // 19
	#define rXX           x14  // 20
	#define rXXI          x15  // 21
	#define rXXII         x16  // 22
	#define rXXIII        x17  // 23
	#define rXXIV         x18  // 24
	#define rXXV          x19  // 25
	#define rXXVI         x1A  // 26
	#define rXXVII        x1B  // 27
	#define rXXVIII       x1C  // 28
	#define rXXIX         x1D  // 29
	#define rXXX          x1E  // 30
	#define rXXXI         x1F  // 31
	#define rXXXII        x20  // 32
	#define rXXXIII       x21  // 33
	#define rXXXIV        x22  // 34
	#define rXXXV         x23  // 35
	#define rXXXVI        x24  // 36
	#define rXXXVII       x25  // 37
	#define rXXXVIII      x26  // 38
	#define rXXXIX        x27  // 39
	#define rXL           x28  // 40
	#define rXLI          x29  // 41
	#define rXLII         x2A  // 42
	#define rXLIII        x2B  // 43
	#define rXLIV         x2C  // 44
	#define rXLV          x2D  // 45
	#define rXLVI         x2E  // 46
	#define rXLVII        x2F  // 47
	#define rXLVIII       x30  // 48
	#define rXLIX         x31  // 49
	#define rL            x32  // 50
	#define rLI           x33  // 51
	#define rLII          x34  // 52
	#define rLIII         x35  // 53
	#define rLIV          x36  // 54
	#define rLV           x37  // 55
	#define rLVI          x38  // 56
	#define rLVII         x39  // 57
	#define rLVIII        x3A  // 58
	#define rLIX          x3B  // 59
	#define rLX           x3C  // 60
	#define rLXI          x3D  // 61
	#define rLXII         x3E  // 62
	#define rLXIII        x3F  // 63
	#define rLXIV         x40  // 64
	#define rLXV          x41  // 65
	#define rLXVI         x42  // 66
	#define rLXVII        x43  // 67
	#define rLXVIII       x44  // 68
	#define rLXIX         x45  // 69
	#define rLXX          x46  // 70
	#define rLXXI         x47  // 71
	#define rLXXII        x48  // 72
	#define rLXXIII       x49  // 73
	#define rLXXIV        x4A  // 74
	#define rLXXV         x4B  // 75
	#define rLXXVI        x4C  // 76
	#define rLXXVII       x4D  // 77
	#define rLXXVIII      x4E  // 78
	#define rLXXIX        x4F  // 79
	#define rLXXX         x50  // 80
	#define rLXXXI        x51  // 81
	#define rLXXXII       x52  // 82
	#define rLXXXIII      x53  // 83
	#define rLXXXIV       x54  // 84
	#define rLXXXV        x55  // 85
	#define rLXXXVI       x56  // 86
	#define rLXXXVII      x57  // 87
	#define rLXXXVIII     x58  // 88
	#define rLXXXIX       x59  // 89
	#define rXC           x5A  // 90
	#define rXCI          x5B  // 91
	#define rXCII         x5C  // 92
	#define rXCIII        x5D  // 93
	#define rXCIV         x5E  // 94
	#define rXCV          x5F  // 95
	#define rXCVI         x60  // 96
	#define rXCVII        x61  // 97
	#define rXCVIII       x62  // 98
	#define rXCIX         x63  // 99
	#define rC            x64  // 100
	#define rCI           x65  // 101
	#define rCII          x66  // 102
	#define rCIII         x67  // 103
	#define rCIV          x68  // 104
	#define rCV           x69  // 105
	#define rCVI          x6A  // 106
	#define rCVII         x6B  // 107
	#define rCVIII        x6C  // 108
	#define rCIX          x6D  // 109
	#define rCX           x6E  // 110
	#define rCXI          x6F  // 111
	#define rCXII         x70  // 112
	#define rCXIII        x71  // 113
	#define rCXIV         x72  // 114
	#define rCXV          x73  // 115
	#define rCXVI         x74  // 116
	#define rCXVII        x75  // 117
	#define rCXVIII       x76  // 118
	#define rCXIX         x77  // 119
	#define rCXX          x78  // 120
	#define rCXXI         x79  // 121
	#define rCXXII        x7A  // 122
	#define rCXXIII       x7B  // 123
	#define rCXXIV        x7C  // 124
	#define rCXXV         x7D  // 125
	#define rCXXVI        x7E  // 126
	#define rCXXVII       x7F  // 127
	#define rCXXVIII      x80  // 128
	#define rCXXIX        x81  // 129
	#define rCXXX         x82  // 130
	#define rCXXXI        x83  // 131
	#define rCXXXII       x84  // 132
	#define rCXXXIII      x85  // 133
	#define rCXXXIV       x86  // 134
	#define rCXXXV        x87  // 135
	#define rCXXXVI       x88  // 136
	#define rCXXXVII      x89  // 137
	#define rCXXXVIII     x8A  // 138
	#define rCXXXIX       x8B  // 139
	#define rCXL          x8C  // 140
	#define rCXLI         x8D  // 141
	#define rCXLII        x8E  // 142
	#define rCXLIII       x8F  // 143
	#define rCXLIV        x90  // 144
	#define rCXLV         x91  // 145
	#define rCXLVI        x92  // 146
	#define rCXLVII       x93  // 147
	#define rCXLVIII      x94  // 148
	#define rCXLIX        x95  // 149
	#define rCL           x96  // 150
	#define rCLI          x97  // 151
	#define rCLII         x98  // 152
	#define rCLIII        x99  // 153
	#define rCLIV         x9A  // 154
	#define rCLV          x9B  // 155
	#define rCLVI         x9C  // 156
	#define rCLVII        x9D  // 157
	#define rCLVIII       x9E  // 158
	#define rCLIX         x9F  // 159
	#define rCLX          xA0  // 160
	#define rCLXI         xA1  // 161
	#define rCLXII        xA2  // 162
	#define rCLXIII       xA3  // 163
	#define rCLXIV        xA4  // 164
	#define rCLXV         xA5  // 165
	#define rCLXVI        xA6  // 166
	#define rCLXVII       xA7  // 167
	#define rCLXVIII      xA8  // 168
	#define rCLXIX        xA9  // 169
	#define rCLXX         xAA  // 170
	#define rCLXXI        xAB  // 171
	#define rCLXXII       xAC  // 172
	#define rCLXXIII      xAD  // 173
	#define rCLXXIV       xAE  // 174
	#define rCLXXV        xAF  // 175
	#define rCLXXVI       xB0  // 176
	#define rCLXXVII      xB1  // 177
	#define rCLXXVIII     xB2  // 178
	#define rCLXXIX       xB3  // 179
	#define rCLXXX        xB4  // 180
	#define rCLXXXI       xB5  // 181
	#define rCLXXXII      xB6  // 182
	#define rCLXXXIII     xB7  // 183
	#define rCLXXXIV      xB8  // 184
	#define rCLXXXV       xB9  // 185
	#define rCLXXXVI      xBA  // 186
	#define rCLXXXVII     xBB  // 187
	#define rCLXXXVIII    xBC  // 188
	#define rCLXXXIX      xBD  // 189
	#define rCXC          xBE  // 190
	#define rCXCI         xBF  // 191
	#define rCXCII        xC0  // 192
	#define rCXCIII       xC1  // 193
	#define rCXCIV        xC2  // 194
	#define rCXCV         xC3  // 195
	#define rCXCVI        xC4  // 196
	#define rCXCVII       xC5  // 197
	#define rCXCVIII      xC6  // 198
	#define rCXCIX        xC7  // 199
	#define rCC           xC8  // 200
	#define rCCI          xC9  // 201
	#define rCCII         xCA  // 202
	#define rCCIII        xCB  // 203
	#define rCCIV         xCC  // 204
	#define rCCV          xCD  // 205
	#define rCCVI         xCE  // 206
	#define rCCVII        xCF  // 207
	#define rCCVIII       xD0  // 208
	#define rCCIX         xD1  // 209
	#define rCCX          xD2  // 210
	#define rCCXI         xD3  // 211
	#define rCCXII        xD4  // 212
	#define rCCXIII       xD5  // 213
	#define rCCXIV        xD6  // 214
	#define rCCXV         xD7  // 215
	#define rCCXVI        xD8  // 216
	#define rCCXVII       xD9  // 217
	#define rCCXVIII      xDA  // 218
	#define rCCXIX        xDB  // 219
	#define rCCXX         xDC  // 220
	#define rCCXXI        xDD  // 221
	#define rCCXXII       xDE  // 222
	#define rCCXXIII      xDF  // 223
	#define rCCXXIV       xE0  // 224
	#define rCCXXV        xE1  // 225
	#define rCCXXVI       xE2  // 226
	#define rCCXXVII      xE3  // 227
	#define rCCXXVIII     xE4  // 228
	#define rCCXXIX       xE5  // 229
	#define rCCXXX        xE6  // 230
	#define rCCXXXI       xE7  // 231
	#define rCCXXXII      xE8  // 232
	#define rCCXXXIII     xE9  // 233
	#define rCCXXXIV      xEA  // 234
	#define rCCXXXV       xEB  // 235
	#define rCCXXXVI      xEC  // 236
	#define rCCXXXVII     xED  // 237
	#define rCCXXXVIII    xEE  // 238
	#define rCCXXXIX      xEF  // 239
	#define rCCXL         xF0  // 240
	#define rCCXLI        xF1  // 241
	#define rCCXLII       xF2  // 242
	#define rCCXLIII      xF3  // 243
	#define rCCXLIV       xF4  // 244
	#define rCCXLV        xF5  // 245
	#define rCCXLVI       xF6  // 246
	#define rCCXLVII      xF7  // 247
	#define rCCXLVIII     xF8  // 248
	#define rCCXLIX       xF9  // 249
	#define rCCL          xFA  // 250
	#define rCCLI         xFB  // 251
	#define rCCLII        xFC  // 252
	#define rCCLIII       xFD  // 253
	#define rCCLIV        xFE  // 254
	#define rCCLV         xFF  // 255
	#define rCCLVI        x100 // 256
	#define rCCLVII       x101 // 257
	#define rCCLVIII      x102 // 258
	#define rCCLIX        x103 // 259
	#define rCCLX         x104 // 260
	#define rCCLXI        x105 // 261
	#define rCCLXII       x106 // 262
	#define rCCLXIII      x107 // 263
	#define rCCLXIV       x108 // 264
	#define rCCLXV        x109 // 265
	#define rCCLXVI       x10A // 266
	#define rCCLXVII      x10B // 267
	#define rCCLXVIII     x10C // 268
	#define rCCLXIX       x10D // 269
	#define rCCLXX        x10E // 270
	#define rCCLXXI       x10F // 271
	#define rCCLXXII      x110 // 272
	#define rCCLXXIII     x111 // 273
	#define rCCLXXIV      x112 // 274
	#define rCCLXXV       x113 // 275
	#define rCCLXXVI      x114 // 276
	#define rCCLXXVII     x115 // 277
	#define rCCLXXVIII    x116 // 278
	#define rCCLXXIX      x117 // 279
	#define rCCLXXX       x118 // 280
	#define rCCLXXXI      x119 // 281
	#define rCCLXXXII     x11A // 282
	#define rCCLXXXIII    x11B // 283
	#define rCCLXXXIV     x11C // 284
	#define rCCLXXXV      x11D // 285
	#define rCCLXXXVI     x11E // 286
	#define rCCLXXXVII    x11F // 287
	#define rCCLXXXVIII   x120 // 288
	#define rCCLXXXIX     x121 // 289
	#define rCCXC         x122 // 290
	#define rCCXCI        x123 // 291
	#define rCCXCII       x124 // 292
	#define rCCXCIII      x125 // 293
	#define rCCXCIV       x126 // 294
	#define rCCXCV        x127 // 295
	#define rCCXCVI       x128 // 296
	#define rCCXCVII      x129 // 297
	#define rCCXCVIII     x12A // 298
	#define rCCXCIX       x12B // 299
	#define rCCC          x12C // 300
	#define rCCCI         x12D // 301
	#define rCCCII        x12E // 302
	#define rCCCIII       x12F // 303
	#define rCCCIV        x130 // 304
	#define rCCCV         x131 // 305
	#define rCCCVI        x132 // 306
	#define rCCCVII       x133 // 307
	#define rCCCVIII      x134 // 308
	#define rCCCIX        x135 // 309
	#define rCCCX         x136 // 310
	#define rCCCXI        x137 // 311
	#define rCCCXII       x138 // 312
	#define rCCCXIII      x139 // 313
	#define rCCCXIV       x13A // 314
	#define rCCCXV        x13B // 315
	#define rCCCXVI       x13C // 316
	#define rCCCXVII      x13D // 317
	#define rCCCXVIII     x13E // 318
	#define rCCCXIX       x13F // 319
	#define rCCCXX        x140 // 320
	#define rCCCXXI       x141 // 321
	#define rCCCXXII      x142 // 322
	#define rCCCXXIII     x143 // 323
	#define rCCCXXIV      x144 // 324
	#define rCCCXXV       x145 // 325
	#define rCCCXXVI      x146 // 326
	#define rCCCXXVII     x147 // 327
	#define rCCCXXVIII    x148 // 328
	#define rCCCXXIX      x149 // 329
	#define rCCCXXX       x14A // 330
	#define rCCCXXXI      x14B // 331
	#define rCCCXXXII     x14C // 332
	#define rCCCXXXIII    x14D // 333
	#define rCCCXXXIV     x14E // 334
	#define rCCCXXXV      x14F // 335
	#define rCCCXXXVI     x150 // 336
	#define rCCCXXXVII    x151 // 337
	#define rCCCXXXVIII   x152 // 338
	#define rCCCXXXIX     x153 // 339
	#define rCCCXL        x154 // 340
	#define rCCCXLI       x155 // 341
	#define rCCCXLII      x156 // 342
	#define rCCCXLIII     x157 // 343
	#define rCCCXLIV      x158 // 344
	#define rCCCXLV       x159 // 345
	#define rCCCXLVI      x15A // 346
	#define rCCCXLVII     x15B // 347
	#define rCCCXLVIII    x15C // 348
	#define rCCCXLIX      x15D // 349
	#define rCCCL         x15E // 350
	#define rCCCLI        x15F // 351
	#define rCCCLII       x160 // 352
	#define rCCCLIII      x161 // 353
	#define rCCCLIV       x162 // 354
	#define rCCCLV        x163 // 355
	#define rCCCLVI       x164 // 356
	#define rCCCLVII      x165 // 357
	#define rCCCLVIII     x166 // 358
	#define rCCCLIX       x167 // 359
	#define rCCCLX        x168 // 360
	#define rCCCLXI       x169 // 361
	#define rCCCLXII      x16A // 362
	#define rCCCLXIII     x16B // 363
	#define rCCCLXIV      x16C // 364
	#define rCCCLXV       x16D // 365
	#define rCCCLXVI      x16E // 366
	#define rCCCLXVII     x16F // 367
	#define rCCCLXVIII    x170 // 368
	#define rCCCLXIX      x171 // 369
	#define rCCCLXX       x172 // 370
	#define rCCCLXXI      x173 // 371
	#define rCCCLXXII     x174 // 372
	#define rCCCLXXIII    x175 // 373
	#define rCCCLXXIV     x176 // 374
	#define rCCCLXXV      x177 // 375
	#define rCCCLXXVI     x178 // 376
	#define rCCCLXXVII    x179 // 377
	#define rCCCLXXVIII   x17A // 378
	#define rCCCLXXIX     x17B // 379
	#define rCCCLXXX      x17C // 380
	#define rCCCLXXXI     x17D // 381
	#define rCCCLXXXII    x17E // 382
	#define rCCCLXXXIII   x17F // 383
	#define rCCCLXXXIV    x180 // 384
	#define rCCCLXXXV     x181 // 385
	#define rCCCLXXXVI    x182 // 386
	#define rCCCLXXXVII   x183 // 387
	#define rCCCLXXXVIII  x184 // 388
	#define rCCCLXXXIX    x185 // 389
	#define rCCCXC        x186 // 390
	#define rCCCXCI       x187 // 391
	#define rCCCXCII      x188 // 392
	#define rCCCXCIII     x189 // 393
	#define rCCCXCIV      x18A // 394
	#define rCCCXCV       x18B // 395
	#define rCCCXCVI      x18C // 396
	#define rCCCXCVII     x18D // 397
	#define rCCCXCVIII    x18E // 398
	#define rCCCXCIX      x18F // 399
	#define rCD           x190 // 400
	#define rCDI          x191 // 401
	#define rCDII         x192 // 402
	#define rCDIII        x193 // 403
	#define rCDIV         x194 // 404
	#define rCDV          x195 // 405
	#define rCDVI         x196 // 406
	#define rCDVII        x197 // 407
	#define rCDVIII       x198 // 408
	#define rCDIX         x199 // 409
	#define rCDX          x19A // 410
	#define rCDXI         x19B // 411
	#define rCDXII        x19C // 412
	#define rCDXIII       x19D // 413
	#define rCDXIV        x19E // 414
	#define rCDXV         x19F // 415
	#define rCDXVI        x1A0 // 416
	#define rCDXVII       x1A1 // 417
	#define rCDXVIII      x1A2 // 418
	#define rCDXIX        x1A3 // 419
	#define rCDXX         x1A4 // 420
	#define rCDXXI        x1A5 // 421
	#define rCDXXII       x1A6 // 422
	#define rCDXXIII      x1A7 // 423
	#define rCDXXIV       x1A8 // 424
	#define rCDXXV        x1A9 // 425
	#define rCDXXVI       x1AA // 426
	#define rCDXXVII      x1AB // 427
	#define rCDXXVIII     x1AC // 428
	#define rCDXXIX       x1AD // 429
	#define rCDXXX        x1AE // 430
	#define rCDXXXI       x1AF // 431
	#define rCDXXXII      x1B0 // 432
	#define rCDXXXIII     x1B1 // 433
	#define rCDXXXIV      x1B2 // 434
	#define rCDXXXV       x1B3 // 435
	#define rCDXXXVI      x1B4 // 436
	#define rCDXXXVII     x1B5 // 437
	#define rCDXXXVIII    x1B6 // 438
	#define rCDXXXIX      x1B7 // 439
	#define rCDXL         x1B8 // 440
	#define rCDXLI        x1B9 // 441
	#define rCDXLII       x1BA // 442
	#define rCDXLIII      x1BB // 443
	#define rCDXLIV       x1BC // 444
	#define rCDXLV        x1BD // 445
	#define rCDXLVI       x1BE // 446
	#define rCDXLVII      x1BF // 447
	#define rCDXLVIII     x1C0 // 448
	#define rCDXLIX       x1C1 // 449
	#define rCDL          x1C2 // 450
	#define rCDLI         x1C3 // 451
	#define rCDLII        x1C4 // 452
	#define rCDLIII       x1C5 // 453
	#define rCDLIV        x1C6 // 454
	#define rCDLV         x1C7 // 455
	#define rCDLVI        x1C8 // 456
	#define rCDLVII       x1C9 // 457
	#define rCDLVIII      x1CA // 458
	#define rCDLIX        x1CB // 459
	#define rCDLX         x1CC // 460
	#define rCDLXI        x1CD // 461
	#define rCDLXII       x1CE // 462
	#define rCDLXIII      x1CF // 463
	#define rCDLXIV       x1D0 // 464
	#define rCDLXV        x1D1 // 465
	#define rCDLXVI       x1D2 // 466
	#define rCDLXVII      x1D3 // 467
	#define rCDLXVIII     x1D4 // 468
	#define rCDLXIX       x1D5 // 469
	#define rCDLXX        x1D6 // 470
	#define rCDLXXI       x1D7 // 471
	#define rCDLXXII      x1D8 // 472
	#define rCDLXXIII     x1D9 // 473
	#define rCDLXXIV      x1DA // 474
	#define rCDLXXV       x1DB // 475
	#define rCDLXXVI      x1DC // 476
	#define rCDLXXVII     x1DD // 477
	#define rCDLXXVIII    x1DE // 478
	#define rCDLXXIX      x1DF // 479
	#define rCDLXXX       x1E0 // 480
	#define rCDLXXXI      x1E1 // 481
	#define rCDLXXXII     x1E2 // 482
	#define rCDLXXXIII    x1E3 // 483
	#define rCDLXXXIV     x1E4 // 484
	#define rCDLXXXV      x1E5 // 485
	#define rCDLXXXVI     x1E6 // 486
	#define rCDLXXXVII    x1E7 // 487
	#define rCDLXXXVIII   x1E8 // 488
	#define rCDLXXXIX     x1E9 // 489
	#define rCDXC         x1EA // 490
	#define rCDXCI        x1EB // 491
	#define rCDXCII       x1EC // 492
	#define rCDXCIII      x1ED // 493
	#define rCDXCIV       x1EE // 494
	#define rCDXCV        x1EF // 495
	#define rCDXCVI       x1F0 // 496
	#define rCDXCVII      x1F1 // 497
	#define rCDXCVIII     x1F2 // 498
	#define rCDXCIX       x1F3 // 499
	#define rD            x1F4 // 500
	#define rDI           x1F5 // 501
	#define rDII          x1F6 // 502
	#define rDIII         x1F7 // 503
	#define rDIV          x1F8 // 504
	#define rDV           x1F9 // 505
	#define rDVI          x1FA // 506
	#define rDVII         x1FB // 507
	#define rDVIII        x1FC // 508
	#define rDIX          x1FD // 509
	#define rDX           x1FE // 510
	#define rDXI          x1FF // 511
	#define rDXII         x200 // 512
	#define rDXIII        x201 // 513
	#define rDXIV         x202 // 514
	#define rDXV          x203 // 515
	#define rDXVI         x204 // 516
	#define rDXVII        x205 // 517
	#define rDXVIII       x206 // 518
	#define rDXIX         x207 // 519
	#define rDXX          x208 // 520
	#define rDXXI         x209 // 521
	#define rDXXII        x20A // 522
	#define rDXXIII       x20B // 523
	#define rDXXIV        x20C // 524
	#define rDXXV         x20D // 525
	#define rDXXVI        x20E // 526
	#define rDXXVII       x20F // 527
	#define rDXXVIII      x210 // 528
	#define rDXXIX        x211 // 529
	#define rDXXX         x212 // 530
	#define rDXXXI        x213 // 531
	#define rDXXXII       x214 // 532
	#define rDXXXIII      x215 // 533
	#define rDXXXIV       x216 // 534
	#define rDXXXV        x217 // 535
	#define rDXXXVI       x218 // 536
	#define rDXXXVII      x219 // 537
	#define rDXXXVIII     x21A // 538
	#define rDXXXIX       x21B // 539
	#define rDXL          x21C // 540
	#define rDXLI         x21D // 541
	#define rDXLII        x21E // 542
	#define rDXLIII       x21F // 543
	#define rDXLIV        x220 // 544
	#define rDXLV         x221 // 545
	#define rDXLVI        x222 // 546
	#define rDXLVII       x223 // 547
	#define rDXLVIII      x224 // 548
	#define rDXLIX        x225 // 549
	#define rDL           x226 // 550
	#define rDLI          x227 // 551
	#define rDLII         x228 // 552
	#define rDLIII        x229 // 553
	#define rDLIV         x22A // 554
	#define rDLV          x22B // 555
	#define rDLVI         x22C // 556
	#define rDLVII        x22D // 557
	#define rDLVIII       x22E // 558
	#define rDLIX         x22F // 559
	#define rDLX          x230 // 560
	#define rDLXI         x231 // 561
	#define rDLXII        x232 // 562
	#define rDLXIII       x233 // 563
	#define rDLXIV        x234 // 564
	#define rDLXV         x235 // 565
	#define rDLXVI        x236 // 566
	#define rDLXVII       x237 // 567
	#define rDLXVIII      x238 // 568
	#define rDLXIX        x239 // 569
	#define rDLXX         x23A // 570
	#define rDLXXI        x23B // 571
	#define rDLXXII       x23C // 572
	#define rDLXXIII      x23D // 573
	#define rDLXXIV       x23E // 574
	#define rDLXXV        x23F // 575
	#define rDLXXVI       x240 // 576
	#define rDLXXVII      x241 // 577
	#define rDLXXVIII     x242 // 578
	#define rDLXXIX       x243 // 579
	#define rDLXXX        x244 // 580
	#define rDLXXXI       x245 // 581
	#define rDLXXXII      x246 // 582
	#define rDLXXXIII     x247 // 583
	#define rDLXXXIV      x248 // 584
	#define rDLXXXV       x249 // 585
	#define rDLXXXVI      x24A // 586
	#define rDLXXXVII     x24B // 587
	#define rDLXXXVIII    x24C // 588
	#define rDLXXXIX      x24D // 589
	#define rDXC          x24E // 590
	#define rDXCI         x24F // 591
	#define rDXCII        x250 // 592
	#define rDXCIII       x251 // 593
	#define rDXCIV        x252 // 594
	#define rDXCV         x253 // 595
	#define rDXCVI        x254 // 596
	#define rDXCVII       x255 // 597
	#define rDXCVIII      x256 // 598
	#define rDXCIX        x257 // 599
	#define rDC           x258 // 600
	#define rDCI          x259 // 601
	#define rDCII         x25A // 602
	#define rDCIII        x25B // 603
	#define rDCIV         x25C // 604
	#define rDCV          x25D // 605
	#define rDCVI         x25E // 606
	#define rDCVII        x25F // 607
	#define rDCVIII       x260 // 608
	#define rDCIX         x261 // 609
	#define rDCX          x262 // 610
	#define rDCXI         x263 // 611
	#define rDCXII        x264 // 612
	#define rDCXIII       x265 // 613
	#define rDCXIV        x266 // 614
	#define rDCXV         x267 // 615
	#define rDCXVI        x268 // 616
	#define rDCXVII       x269 // 617
	#define rDCXVIII      x26A // 618
	#define rDCXIX        x26B // 619
	#define rDCXX         x26C // 620
	#define rDCXXI        x26D // 621
	#define rDCXXII       x26E // 622
	#define rDCXXIII      x26F // 623
	#define rDCXXIV       x270 // 624
	#define rDCXXV        x271 // 625
	#define rDCXXVI       x272 // 626
	#define rDCXXVII      x273 // 627
	#define rDCXXVIII     x274 // 628
	#define rDCXXIX       x275 // 629
	#define rDCXXX        x276 // 630
	#define rDCXXXI       x277 // 631
	#define rDCXXXII      x278 // 632
	#define rDCXXXIII     x279 // 633
	#define rDCXXXIV      x27A // 634
	#define rDCXXXV       x27B // 635
	#define rDCXXXVI      x27C // 636
	#define rDCXXXVII     x27D // 637
	#define rDCXXXVIII    x27E // 638
	#define rDCXXXIX      x27F // 639
	#define rDCXL         x280 // 640
	#define rDCXLI        x281 // 641
	#define rDCXLII       x282 // 642
	#define rDCXLIII      x283 // 643
	#define rDCXLIV       x284 // 644
	#define rDCXLV        x285 // 645
	#define rDCXLVI       x286 // 646
	#define rDCXLVII      x287 // 647
	#define rDCXLVIII     x288 // 648
	#define rDCXLIX       x289 // 649
	#define rDCL          x28A // 650
	#define rDCLI         x28B // 651
	#define rDCLII        x28C // 652
	#define rDCLIII       x28D // 653
	#define rDCLIV        x28E // 654
	#define rDCLV         x28F // 655
	#define rDCLVI        x290 // 656
	#define rDCLVII       x291 // 657
	#define rDCLVIII      x292 // 658
	#define rDCLIX        x293 // 659
	#define rDCLX         x294 // 660
	#define rDCLXI        x295 // 661
	#define rDCLXII       x296 // 662
	#define rDCLXIII      x297 // 663
	#define rDCLXIV       x298 // 664
	#define rDCLXV        x299 // 665
	#define rDCLXVI       x29A // 666
	#define rDCLXVII      x29B // 667
	#define rDCLXVIII     x29C // 668
	#define rDCLXIX       x29D // 669
	#define rDCLXX        x29E // 670
	#define rDCLXXI       x29F // 671
	#define rDCLXXII      x2A0 // 672
	#define rDCLXXIII     x2A1 // 673
	#define rDCLXXIV      x2A2 // 674
	#define rDCLXXV       x2A3 // 675
	#define rDCLXXVI      x2A4 // 676
	#define rDCLXXVII     x2A5 // 677
	#define rDCLXXVIII    x2A6 // 678
	#define rDCLXXIX      x2A7 // 679
	#define rDCLXXX       x2A8 // 680
	#define rDCLXXXI      x2A9 // 681
	#define rDCLXXXII     x2AA // 682
	#define rDCLXXXIII    x2AB // 683
	#define rDCLXXXIV     x2AC // 684
	#define rDCLXXXV      x2AD // 685
	#define rDCLXXXVI     x2AE // 686
	#define rDCLXXXVII    x2AF // 687
	#define rDCLXXXVIII   x2B0 // 688
	#define rDCLXXXIX     x2B1 // 689
	#define rDCXC         x2B2 // 690
	#define rDCXCI        x2B3 // 691
	#define rDCXCII       x2B4 // 692
	#define rDCXCIII      x2B5 // 693
	#define rDCXCIV       x2B6 // 694
	#define rDCXCV        x2B7 // 695
	#define rDCXCVI       x2B8 // 696
	#define rDCXCVII      x2B9 // 697
	#define rDCXCVIII     x2BA // 698
	#define rDCXCIX       x2BB // 699
	#define rDCC          x2BC // 700
	#define rDCCI         x2BD // 701
	#define rDCCII        x2BE // 702
	#define rDCCIII       x2BF // 703
	#define rDCCIV        x2C0 // 704
	#define rDCCV         x2C1 // 705
	#define rDCCVI        x2C2 // 706
	#define rDCCVII       x2C3 // 707
	#define rDCCVIII      x2C4 // 708
	#define rDCCIX        x2C5 // 709
	#define rDCCX         x2C6 // 710
	#define rDCCXI        x2C7 // 711
	#define rDCCXII       x2C8 // 712
	#define rDCCXIII      x2C9 // 713
	#define rDCCXIV       x2CA // 714
	#define rDCCXV        x2CB // 715
	#define rDCCXVI       x2CC // 716
	#define rDCCXVII      x2CD // 717
	#define rDCCXVIII     x2CE // 718
	#define rDCCXIX       x2CF // 719
	#define rDCCXX        x2D0 // 720
	#define rDCCXXI       x2D1 // 721
	#define rDCCXXII      x2D2 // 722
	#define rDCCXXIII     x2D3 // 723
	#define rDCCXXIV      x2D4 // 724
	#define rDCCXXV       x2D5 // 725
	#define rDCCXXVI      x2D6 // 726
	#define rDCCXXVII     x2D7 // 727
	#define rDCCXXVIII    x2D8 // 728
	#define rDCCXXIX      x2D9 // 729
	#define rDCCXXX       x2DA // 730
	#define rDCCXXXI      x2DB // 731
	#define rDCCXXXII     x2DC // 732
	#define rDCCXXXIII    x2DD // 733
	#define rDCCXXXIV     x2DE // 734
	#define rDCCXXXV      x2DF // 735
	#define rDCCXXXVI     x2E0 // 736
	#define rDCCXXXVII    x2E1 // 737
	#define rDCCXXXVIII   x2E2 // 738
	#define rDCCXXXIX     x2E3 // 739
	#define rDCCXL        x2E4 // 740
	#define rDCCXLI       x2E5 // 741
	#define rDCCXLII      x2E6 // 742
	#define rDCCXLIII     x2E7 // 743
	#define rDCCXLIV      x2E8 // 744
	#define rDCCXLV       x2E9 // 745
	#define rDCCXLVI      x2EA // 746
	#define rDCCXLVII     x2EB // 747
	#define rDCCXLVIII    x2EC // 748
	#define rDCCXLIX      x2ED // 749
	#define rDCCL         x2EE // 750
	#define rDCCLI        x2EF // 751
	#define rDCCLII       x2F0 // 752
	#define rDCCLIII      x2F1 // 753
	#define rDCCLIV       x2F2 // 754
	#define rDCCLV        x2F3 // 755
	#define rDCCLVI       x2F4 // 756
	#define rDCCLVII      x2F5 // 757
	#define rDCCLVIII     x2F6 // 758
	#define rDCCLIX       x2F7 // 759
	#define rDCCLX        x2F8 // 760
	#define rDCCLXI       x2F9 // 761
	#define rDCCLXII      x2FA // 762
	#define rDCCLXIII     x2FB // 763
	#define rDCCLXIV      x2FC // 764
	#define rDCCLXV       x2FD // 765
	#define rDCCLXVI      x2FE // 766
	#define rDCCLXVII     x2FF // 767
	#define rDCCLXVIII    x300 // 768
	#define rDCCLXIX      x301 // 769
	#define rDCCLXX       x302 // 770
	#define rDCCLXXI      x303 // 771
	#define rDCCLXXII     x304 // 772
	#define rDCCLXXIII    x305 // 773
	#define rDCCLXXIV     x306 // 774
	#define rDCCLXXV      x307 // 775
	#define rDCCLXXVI     x308 // 776
	#define rDCCLXXVII    x309 // 777
	#define rDCCLXXVIII   x30A // 778
	#define rDCCLXXIX     x30B // 779
	#define rDCCLXXX      x30C // 780
	#define rDCCLXXXI     x30D // 781
	#define rDCCLXXXII    x30E // 782
	#define rDCCLXXXIII   x30F // 783
	#define rDCCLXXXIV    x310 // 784
	#define rDCCLXXXV     x311 // 785
	#define rDCCLXXXVI    x312 // 786
	#define rDCCLXXXVII   x313 // 787
	#define rDCCLXXXVIII  x314 // 788
	#define rDCCLXXXIX    x315 // 789
	#define rDCCXC        x316 // 790
	#define rDCCXCI       x317 // 791
	#define rDCCXCII      x318 // 792
	#define rDCCXCIII     x319 // 793
	#define rDCCXCIV      x31A // 794
	#define rDCCXCV       x31B // 795
	#define rDCCXCVI      x31C // 796
	#define rDCCXCVII     x31D // 797
	#define rDCCXCVIII    x31E // 798
	#define rDCCXCIX      x31F // 799
	#define rDCCC         x320 // 800
	#define rDCCCI        x321 // 801
	#define rDCCCII       x322 // 802
	#define rDCCCIII      x323 // 803
	#define rDCCCIV       x324 // 804
	#define rDCCCV        x325 // 805
	#define rDCCCVI       x326 // 806
	#define rDCCCVII      x327 // 807
	#define rDCCCVIII     x328 // 808
	#define rDCCCIX       x329 // 809
	#define rDCCCX        x32A // 810
	#define rDCCCXI       x32B // 811
	#define rDCCCXII      x32C // 812
	#define rDCCCXIII     x32D // 813
	#define rDCCCXIV      x32E // 814
	#define rDCCCXV       x32F // 815
	#define rDCCCXVI      x330 // 816
	#define rDCCCXVII     x331 // 817
	#define rDCCCXVIII    x332 // 818
	#define rDCCCXIX      x333 // 819
	#define rDCCCXX       x334 // 820
	#define rDCCCXXI      x335 // 821
	#define rDCCCXXII     x336 // 822
	#define rDCCCXXIII    x337 // 823
	#define rDCCCXXIV     x338 // 824
	#define rDCCCXXV      x339 // 825
	#define rDCCCXXVI     x33A // 826
	#define rDCCCXXVII    x33B // 827
	#define rDCCCXXVIII   x33C // 828
	#define rDCCCXXIX     x33D // 829
	#define rDCCCXXX      x33E // 830
	#define rDCCCXXXI     x33F // 831
	#define rDCCCXXXII    x340 // 832
	#define rDCCCXXXIII   x341 // 833
	#define rDCCCXXXIV    x342 // 834
	#define rDCCCXXXV     x343 // 835
	#define rDCCCXXXVI    x344 // 836
	#define rDCCCXXXVII   x345 // 837
	#define rDCCCXXXVIII  x346 // 838
	#define rDCCCXXXIX    x347 // 839
	#define rDCCCXL       x348 // 840
	#define rDCCCXLI      x349 // 841
	#define rDCCCXLII     x34A // 842
	#define rDCCCXLIII    x34B // 843
	#define rDCCCXLIV     x34C // 844
	#define rDCCCXLV      x34D // 845
	#define rDCCCXLVI     x34E // 846
	#define rDCCCXLVII    x34F // 847
	#define rDCCCXLVIII   x350 // 848
	#define rDCCCXLIX     x351 // 849
	#define rDCCCL        x352 // 850
	#define rDCCCLI       x353 // 851
	#define rDCCCLII      x354 // 852
	#define rDCCCLIII     x355 // 853
	#define rDCCCLIV      x356 // 854
	#define rDCCCLV       x357 // 855
	#define rDCCCLVI      x358 // 856
	#define rDCCCLVII     x359 // 857
	#define rDCCCLVIII    x35A // 858
	#define rDCCCLIX      x35B // 859
	#define rDCCCLX       x35C // 860
	#define rDCCCLXI      x35D // 861
	#define rDCCCLXII     x35E // 862
	#define rDCCCLXIII    x35F // 863
	#define rDCCCLXIV     x360 // 864
	#define rDCCCLXV      x361 // 865
	#define rDCCCLXVI     x362 // 866
	#define rDCCCLXVII    x363 // 867
	#define rDCCCLXVIII   x364 // 868
	#define rDCCCLXIX     x365 // 869
	#define rDCCCLXX      x366 // 870
	#define rDCCCLXXI     x367 // 871
	#define rDCCCLXXII    x368 // 872
	#define rDCCCLXXIII   x369 // 873
	#define rDCCCLXXIV    x36A // 874
	#define rDCCCLXXV     x36B // 875
	#define rDCCCLXXVI    x36C // 876
	#define rDCCCLXXVII   x36D // 877
	#define rDCCCLXXVIII  x36E // 878
	#define rDCCCLXXIX    x36F // 879
	#define rDCCCLXXX     x370 // 880
	#define rDCCCLXXXI    x371 // 881
	#define rDCCCLXXXII   x372 // 882
	#define rDCCCLXXXIII  x373 // 883
	#define rDCCCLXXXIV   x374 // 884
	#define rDCCCLXXXV    x375 // 885
	#define rDCCCLXXXVI   x376 // 886
	#define rDCCCLXXXVII  x377 // 887
	#define rDCCCLXXXVIII x378 // 888
	#define rDCCCLXXXIX   x379 // 889
	#define rDCCCXC       x37A // 890
	#define rDCCCXCI      x37B // 891
	#define rDCCCXCII     x37C // 892
	#define rDCCCXCIII    x37D // 893
	#define rDCCCXCIV     x37E // 894
	#define rDCCCXCV      x37F // 895
	#define rDCCCXCVI     x380 // 896
	#define rDCCCXCVII    x381 // 897
	#define rDCCCXCVIII   x382 // 898
	#define rDCCCXCIX     x383 // 899
	#define rCM           x384 // 900
	#define rCMI          x385 // 901
	#define rCMII         x386 // 902
	#define rCMIII        x387 // 903
	#define rCMIV         x388 // 904
	#define rCMV          x389 // 905
	#define rCMVI         x38A // 906
	#define rCMVII        x38B // 907
	#define rCMVIII       x38C // 908
	#define rCMIX         x38D // 909
	#define rCMX          x38E // 910
	#define rCMXI         x38F // 911
	#define rCMXII        x390 // 912
	#define rCMXIII       x391 // 913
	#define rCMXIV        x392 // 914
	#define rCMXV         x393 // 915
	#define rCMXVI        x394 // 916
	#define rCMXVII       x395 // 917
	#define rCMXVIII      x396 // 918
	#define rCMXIX        x397 // 919
	#define rCMXX         x398 // 920
	#define rCMXXI        x399 // 921
	#define rCMXXII       x39A // 922
	#define rCMXXIII      x39B // 923
	#define rCMXXIV       x39C // 924
	#define rCMXXV        x39D // 925
	#define rCMXXVI       x39E // 926
	#define rCMXXVII      x39F // 927
	#define rCMXXVIII     x3A0 // 928
	#define rCMXXIX       x3A1 // 929
	#define rCMXXX        x3A2 // 930
	#define rCMXXXI       x3A3 // 931
	#define rCMXXXII      x3A4 // 932
	#define rCMXXXIII     x3A5 // 933
	#define rCMXXXIV      x3A6 // 934
	#define rCMXXXV       x3A7 // 935
	#define rCMXXXVI      x3A8 // 936
	#define rCMXXXVII     x3A9 // 937
	#define rCMXXXVIII    x3AA // 938
	#define rCMXXXIX      x3AB // 939
	#define rCMXL         x3AC // 940
	#define rCMXLI        x3AD // 941
	#define rCMXLII       x3AE // 942
	#define rCMXLIII      x3AF // 943
	#define rCMXLIV       x3B0 // 944
	#define rCMXLV        x3B1 // 945
	#define rCMXLVI       x3B2 // 946
	#define rCMXLVII      x3B3 // 947
	#define rCMXLVIII     x3B4 // 948
	#define rCMXLIX       x3B5 // 949
	#define rCML          x3B6 // 950
	#define rCMLI         x3B7 // 951
	#define rCMLII        x3B8 // 952
	#define rCMLIII       x3B9 // 953
	#define rCMLIV        x3BA // 954
	#define rCMLV         x3BB // 955
	#define rCMLVI        x3BC // 956
	#define rCMLVII       x3BD // 957
	#define rCMLVIII      x3BE // 958
	#define rCMLIX        x3BF // 959
	#define rCMLX         x3C0 // 960
	#define rCMLXI        x3C1 // 961
	#define rCMLXII       x3C2 // 962
	#define rCMLXIII      x3C3 // 963
	#define rCMLXIV       x3C4 // 964
	#define rCMLXV        x3C5 // 965
	#define rCMLXVI       x3C6 // 966
	#define rCMLXVII      x3C7 // 967
	#define rCMLXVIII     x3C8 // 968
	#define rCMLXIX       x3C9 // 969
	#define rCMLXX        x3CA // 970
	#define rCMLXXI       x3CB // 971
	#define rCMLXXII      x3CC // 972
	#define rCMLXXIII     x3CD // 973
	#define rCMLXXIV      x3CE // 974
	#define rCMLXXV       x3CF // 975
	#define rCMLXXVI      x3D0 // 976
	#define rCMLXXVII     x3D1 // 977
	#define rCMLXXVIII    x3D2 // 978
	#define rCMLXXIX      x3D3 // 979
	#define rCMLXXX       x3D4 // 980
	#define rCMLXXXI      x3D5 // 981
	#define rCMLXXXII     x3D6 // 982
	#define rCMLXXXIII    x3D7 // 983
	#define rCMLXXXIV     x3D8 // 984
	#define rCMLXXXV      x3D9 // 985
	#define rCMLXXXVI     x3DA // 986
	#define rCMLXXXVII    x3DB // 987
	#define rCMLXXXVIII   x3DC // 988
	#define rCMLXXXIX     x3DD // 989
	#define rCMXC         x3DE // 990
	#define rCMXCI        x3DF // 991
	#define rCMXCII       x3E0 // 992
	#define rCMXCIII      x3E1 // 993
	#define rCMXCIV       x3E2 // 994
	#define rCMXCV        x3E3 // 995
	#define rCMXCVI       x3E4 // 996
	#define rCMXCVII      x3E5 // 997
	#define rCMXCVIII     x3E6 // 998
	#define rCMXCIX       x3E7 // 999
	#define rM            x3E8 // 1000
	#define rMI           x3E9 // 1001
	#define rMII          x3EA // 1002
	#define rMIII         x3EB // 1003
	#define rMIV          x3EC // 1004
	#define rMV           x3ED // 1005
	#define rMVI          x3EE // 1006
	#define rMVII         x3EF // 1007
	#define rMVIII        x3F0 // 1008
	#define rMIX          x3F1 // 1009
	#define rMX           x3F2 // 1010
	#define rMXI          x3F3 // 1011
	#define rMXII         x3F4 // 1012
	#define rMXIII        x3F5 // 1013
	#define rMXIV         x3F6 // 1014
	#define rMXV          x3F7 // 1015
	#define rMXVI         x3F8 // 1016
	#define rMXVII        x3F9 // 1017
	#define rMXVIII       x3FA // 1018
	#define rMXIX         x3FB // 1019
	#define rMXX          x3FC // 1020
	#define rMXXI         x3FD // 1021
	#define rMXXII        x3FE // 1022
	#define rMXXIII       x3FF // 1023
	#define rMXXIV        x400 // 1024
#else
	// YSI compatibility.
	#if defined C
		#undef C
	#endif

	#define nulla        (0)

	#define I            (1)
	#define II           (2)
	#define III          (3)
	#define IV           (4)
	#define V            (5)
	#define VI           (6)
	#define VII          (7)
	#define VIII         (8)
	#define IX           (9)
	#define X            (10)
	#define XI           (11)
	#define XII          (12)
	#define XIII         (13)
	#define XIV          (14)
	#define XV           (15)
	#define XVI          (16)
	#define XVII         (17)
	#define XVIII        (18)
	#define XIX          (19)
	#define XX           (20)
	#define XXI          (21)
	#define XXII         (22)
	#define XXIII        (23)
	#define XXIV         (24)
	#define XXV          (25)
	#define XXVI         (26)
	#define XXVII        (27)
	#define XXVIII       (28)
	#define XXIX         (29)
	#define XXX          (30)
	#define XXXI         (31)
	#define XXXII        (32)
	#define XXXIII       (33)
	#define XXXIV        (34)
	#define XXXV         (35)
	#define XXXVI        (36)
	#define XXXVII       (37)
	#define XXXVIII      (38)
	#define XXXIX        (39)
	#define XL           (40)
	#define XLI          (41)
	#define XLII         (42)
	#define XLIII        (43)
	#define XLIV         (44)
	#define XLV          (45)
	#define XLVI         (46)
	#define XLVII        (47)
	#define XLVIII       (48)
	#define XLIX         (49)
	#define L            (50)
	#define LI           (51)
	#define LII          (52)
	#define LIII         (53)
	#define LIV          (54)
	#define LV           (55)
	#define LVI          (56)
	#define LVII         (57)
	#define LVIII        (58)
	#define LIX          (59)
	#define LX           (60)
	#define LXI          (61)
	#define LXII         (62)
	#define LXIII        (63)
	#define LXIV         (64)
	#define LXV          (65)
	#define LXVI         (66)
	#define LXVII        (67)
	#define LXVIII       (68)
	#define LXIX         (69)
	#define LXX          (70)
	#define LXXI         (71)
	#define LXXII        (72)
	#define LXXIII       (73)
	#define LXXIV        (74)
	#define LXXV         (75)
	#define LXXVI        (76)
	#define LXXVII       (77)
	#define LXXVIII      (78)
	#define LXXIX        (79)
	#define LXXX         (80)
	#define LXXXI        (81)
	#define LXXXII       (82)
	#define LXXXIII      (83)
	#define LXXXIV       (84)
	#define LXXXV        (85)
	#define LXXXVI       (86)
	#define LXXXVII      (87)
	#define LXXXVIII     (88)
	#define LXXXIX       (89)
	#define XC           (90)
	#define XCI          (91)
	#define XCII         (92)
	#define XCIII        (93)
	#define XCIV         (94)
	#define XCV          (95)
	#define XCVI         (96)
	#define XCVII        (97)
	#define XCVIII       (98)
	#define XCIX         (99)
	#define C            (100)
	#define CI           (101)
	#define CII          (102)
	#define CIII         (103)
	#define CIV          (104)
	#define CV           (105)
	#define CVI          (106)
	#define CVII         (107)
	#define CVIII        (108)
	#define CIX          (109)
	#define CX           (110)
	#define CXI          (111)
	#define CXII         (112)
	#define CXIII        (113)
	#define CXIV         (114)
	#define CXV          (115)
	#define CXVI         (116)
	#define CXVII        (117)
	#define CXVIII       (118)
	#define CXIX         (119)
	#define CXX          (120)
	#define CXXI         (121)
	#define CXXII        (122)
	#define CXXIII       (123)
	#define CXXIV        (124)
	#define CXXV         (125)
	#define CXXVI        (126)
	#define CXXVII       (127)
	#define CXXVIII      (128)
	#define CXXIX        (129)
	#define CXXX         (130)
	#define CXXXI        (131)
	#define CXXXII       (132)
	#define CXXXIII      (133)
	#define CXXXIV       (134)
	#define CXXXV        (135)
	#define CXXXVI       (136)
	#define CXXXVII      (137)
	#define CXXXVIII     (138)
	#define CXXXIX       (139)
	#define CXL          (140)
	#define CXLI         (141)
	#define CXLII        (142)
	#define CXLIII       (143)
	#define CXLIV        (144)
	#define CXLV         (145)
	#define CXLVI        (146)
	#define CXLVII       (147)
	#define CXLVIII      (148)
	#define CXLIX        (149)
	#define CL           (150)
	#define CLI          (151)
	#define CLII         (152)
	#define CLIII        (153)
	#define CLIV         (154)
	#define CLV          (155)
	#define CLVI         (156)
	#define CLVII        (157)
	#define CLVIII       (158)
	#define CLIX         (159)
	#define CLX          (160)
	#define CLXI         (161)
	#define CLXII        (162)
	#define CLXIII       (163)
	#define CLXIV        (164)
	#define CLXV         (165)
	#define CLXVI        (166)
	#define CLXVII       (167)
	#define CLXVIII      (168)
	#define CLXIX        (169)
	#define CLXX         (170)
	#define CLXXI        (171)
	#define CLXXII       (172)
	#define CLXXIII      (173)
	#define CLXXIV       (174)
	#define CLXXV        (175)
	#define CLXXVI       (176)
	#define CLXXVII      (177)
	#define CLXXVIII     (178)
	#define CLXXIX       (179)
	#define CLXXX        (180)
	#define CLXXXI       (181)
	#define CLXXXII      (182)
	#define CLXXXIII     (183)
	#define CLXXXIV      (184)
	#define CLXXXV       (185)
	#define CLXXXVI      (186)
	#define CLXXXVII     (187)
	#define CLXXXVIII    (188)
	#define CLXXXIX      (189)
	#define CXC          (190)
	#define CXCI         (191)
	#define CXCII        (192)
	#define CXCIII       (193)
	#define CXCIV        (194)
	#define CXCV         (195)
	#define CXCVI        (196)
	#define CXCVII       (197)
	#define CXCVIII      (198)
	#define CXCIX        (199)
	#define CC           (200)
	#define CCI          (201)
	#define CCII         (202)
	#define CCIII        (203)
	#define CCIV         (204)
	#define CCV          (205)
	#define CCVI         (206)
	#define CCVII        (207)
	#define CCVIII       (208)
	#define CCIX         (209)
	#define CCX          (210)
	#define CCXI         (211)
	#define CCXII        (212)
	#define CCXIII       (213)
	#define CCXIV        (214)
	#define CCXV         (215)
	#define CCXVI        (216)
	#define CCXVII       (217)
	#define CCXVIII      (218)
	#define CCXIX        (219)
	#define CCXX         (220)
	#define CCXXI        (221)
	#define CCXXII       (222)
	#define CCXXIII      (223)
	#define CCXXIV       (224)
	#define CCXXV        (225)
	#define CCXXVI       (226)
	#define CCXXVII      (227)
	#define CCXXVIII     (228)
	#define CCXXIX       (229)
	#define CCXXX        (230)
	#define CCXXXI       (231)
	#define CCXXXII      (232)
	#define CCXXXIII     (233)
	#define CCXXXIV      (234)
	#define CCXXXV       (235)
	#define CCXXXVI      (236)
	#define CCXXXVII     (237)
	#define CCXXXVIII    (238)
	#define CCXXXIX      (239)
	#define CCXL         (240)
	#define CCXLI        (241)
	#define CCXLII       (242)
	#define CCXLIII      (243)
	#define CCXLIV       (244)
	#define CCXLV        (245)
	#define CCXLVI       (246)
	#define CCXLVII      (247)
	#define CCXLVIII     (248)
	#define CCXLIX       (249)
	#define CCL          (250)
	#define CCLI         (251)
	#define CCLII        (252)
	#define CCLIII       (253)
	#define CCLIV        (254)
	#define CCLV         (255)
	#define CCLVI        (256)
	#define CCLVII       (257)
	#define CCLVIII      (258)
	#define CCLIX        (259)
	#define CCLX         (260)
	#define CCLXI        (261)
	#define CCLXII       (262)
	#define CCLXIII      (263)
	#define CCLXIV       (264)
	#define CCLXV        (265)
	#define CCLXVI       (266)
	#define CCLXVII      (267)
	#define CCLXVIII     (268)
	#define CCLXIX       (269)
	#define CCLXX        (270)
	#define CCLXXI       (271)
	#define CCLXXII      (272)
	#define CCLXXIII     (273)
	#define CCLXXIV      (274)
	#define CCLXXV       (275)
	#define CCLXXVI      (276)
	#define CCLXXVII     (277)
	#define CCLXXVIII    (278)
	#define CCLXXIX      (279)
	#define CCLXXX       (280)
	#define CCLXXXI      (281)
	#define CCLXXXII     (282)
	#define CCLXXXIII    (283)
	#define CCLXXXIV     (284)
	#define CCLXXXV      (285)
	#define CCLXXXVI     (286)
	#define CCLXXXVII    (287)
	#define CCLXXXVIII   (288)
	#define CCLXXXIX     (289)
	#define CCXC         (290)
	#define CCXCI        (291)
	#define CCXCII       (292)
	#define CCXCIII      (293)
	#define CCXCIV       (294)
	#define CCXCV        (295)
	#define CCXCVI       (296)
	#define CCXCVII      (297)
	#define CCXCVIII     (298)
	#define CCXCIX       (299)
	#define CCC          (300)
	#define CCCI         (301)
	#define CCCII        (302)
	#define CCCIII       (303)
	#define CCCIV        (304)
	#define CCCV         (305)
	#define CCCVI        (306)
	#define CCCVII       (307)
	#define CCCVIII      (308)
	#define CCCIX        (309)
	#define CCCX         (310)
	#define CCCXI        (311)
	#define CCCXII       (312)
	#define CCCXIII      (313)
	#define CCCXIV       (314)
	#define CCCXV        (315)
	#define CCCXVI       (316)
	#define CCCXVII      (317)
	#define CCCXVIII     (318)
	#define CCCXIX       (319)
	#define CCCXX        (320)
	#define CCCXXI       (321)
	#define CCCXXII      (322)
	#define CCCXXIII     (323)
	#define CCCXXIV      (324)
	#define CCCXXV       (325)
	#define CCCXXVI      (326)
	#define CCCXXVII     (327)
	#define CCCXXVIII    (328)
	#define CCCXXIX      (329)
	#define CCCXXX       (330)
	#define CCCXXXI      (331)
	#define CCCXXXII     (332)
	#define CCCXXXIII    (333)
	#define CCCXXXIV     (334)
	#define CCCXXXV      (335)
	#define CCCXXXVI     (336)
	#define CCCXXXVII    (337)
	#define CCCXXXVIII   (338)
	#define CCCXXXIX     (339)
	#define CCCXL        (340)
	#define CCCXLI       (341)
	#define CCCXLII      (342)
	#define CCCXLIII     (343)
	#define CCCXLIV      (344)
	#define CCCXLV       (345)
	#define CCCXLVI      (346)
	#define CCCXLVII     (347)
	#define CCCXLVIII    (348)
	#define CCCXLIX      (349)
	#define CCCL         (350)
	#define CCCLI        (351)
	#define CCCLII       (352)
	#define CCCLIII      (353)
	#define CCCLIV       (354)
	#define CCCLV        (355)
	#define CCCLVI       (356)
	#define CCCLVII      (357)
	#define CCCLVIII     (358)
	#define CCCLIX       (359)
	#define CCCLX        (360)
	#define CCCLXI       (361)
	#define CCCLXII      (362)
	#define CCCLXIII     (363)
	#define CCCLXIV      (364)
	#define CCCLXV       (365)
	#define CCCLXVI      (366)
	#define CCCLXVII     (367)
	#define CCCLXVIII    (368)
	#define CCCLXIX      (369)
	#define CCCLXX       (370)
	#define CCCLXXI      (371)
	#define CCCLXXII     (372)
	#define CCCLXXIII    (373)
	#define CCCLXXIV     (374)
	#define CCCLXXV      (375)
	#define CCCLXXVI     (376)
	#define CCCLXXVII    (377)
	#define CCCLXXVIII   (378)
	#define CCCLXXIX     (379)
	#define CCCLXXX      (380)
	#define CCCLXXXI     (381)
	#define CCCLXXXII    (382)
	#define CCCLXXXIII   (383)
	#define CCCLXXXIV    (384)
	#define CCCLXXXV     (385)
	#define CCCLXXXVI    (386)
	#define CCCLXXXVII   (387)
	#define CCCLXXXVIII  (388)
	#define CCCLXXXIX    (389)
	#define CCCXC        (390)
	#define CCCXCI       (391)
	#define CCCXCII      (392)
	#define CCCXCIII     (393)
	#define CCCXCIV      (394)
	#define CCCXCV       (395)
	#define CCCXCVI      (396)
	#define CCCXCVII     (397)
	#define CCCXCVIII    (398)
	#define CCCXCIX      (399)
	#define CD           (400)
	#define CDI          (401)
	#define CDII         (402)
	#define CDIII        (403)
	#define CDIV         (404)
	#define CDV          (405)
	#define CDVI         (406)
	#define CDVII        (407)
	#define CDVIII       (408)
	#define CDIX         (409)
	#define CDX          (410)
	#define CDXI         (411)
	#define CDXII        (412)
	#define CDXIII       (413)
	#define CDXIV        (414)
	#define CDXV         (415)
	#define CDXVI        (416)
	#define CDXVII       (417)
	#define CDXVIII      (418)
	#define CDXIX        (419)
	#define CDXX         (420)
	#define CDXXI        (421)
	#define CDXXII       (422)
	#define CDXXIII      (423)
	#define CDXXIV       (424)
	#define CDXXV        (425)
	#define CDXXVI       (426)
	#define CDXXVII      (427)
	#define CDXXVIII     (428)
	#define CDXXIX       (429)
	#define CDXXX        (430)
	#define CDXXXI       (431)
	#define CDXXXII      (432)
	#define CDXXXIII     (433)
	#define CDXXXIV      (434)
	#define CDXXXV       (435)
	#define CDXXXVI      (436)
	#define CDXXXVII     (437)
	#define CDXXXVIII    (438)
	#define CDXXXIX      (439)
	#define CDXL         (440)
	#define CDXLI        (441)
	#define CDXLII       (442)
	#define CDXLIII      (443)
	#define CDXLIV       (444)
	#define CDXLV        (445)
	#define CDXLVI       (446)
	#define CDXLVII      (447)
	#define CDXLVIII     (448)
	#define CDXLIX       (449)
	#define CDL          (450)
	#define CDLI         (451)
	#define CDLII        (452)
	#define CDLIII       (453)
	#define CDLIV        (454)
	#define CDLV         (455)
	#define CDLVI        (456)
	#define CDLVII       (457)
	#define CDLVIII      (458)
	#define CDLIX        (459)
	#define CDLX         (460)
	#define CDLXI        (461)
	#define CDLXII       (462)
	#define CDLXIII      (463)
	#define CDLXIV       (464)
	#define CDLXV        (465)
	#define CDLXVI       (466)
	#define CDLXVII      (467)
	#define CDLXVIII     (468)
	#define CDLXIX       (469)
	#define CDLXX        (470)
	#define CDLXXI       (471)
	#define CDLXXII      (472)
	#define CDLXXIII     (473)
	#define CDLXXIV      (474)
	#define CDLXXV       (475)
	#define CDLXXVI      (476)
	#define CDLXXVII     (477)
	#define CDLXXVIII    (478)
	#define CDLXXIX      (479)
	#define CDLXXX       (480)
	#define CDLXXXI      (481)
	#define CDLXXXII     (482)
	#define CDLXXXIII    (483)
	#define CDLXXXIV     (484)
	#define CDLXXXV      (485)
	#define CDLXXXVI     (486)
	#define CDLXXXVII    (487)
	#define CDLXXXVIII   (488)
	#define CDLXXXIX     (489)
	#define CDXC         (490)
	#define CDXCI        (491)
	#define CDXCII       (492)
	#define CDXCIII      (493)
	#define CDXCIV       (494)
	#define CDXCV        (495)
	#define CDXCVI       (496)
	#define CDXCVII      (497)
	#define CDXCVIII     (498)
	#define CDXCIX       (499)
	#define D            (500)
	#define DI           (501)
	#define DII          (502)
	#define DIII         (503)
	#define DIV          (504)
	#define DV           (505)
	#define DVI          (506)
	#define DVII         (507)
	#define DVIII        (508)
	#define DIX          (509)
	#define DX           (510)
	#define DXI          (511)
	#define DXII         (512)
	#define DXIII        (513)
	#define DXIV         (514)
	#define DXV          (515)
	#define DXVI         (516)
	#define DXVII        (517)
	#define DXVIII       (518)
	#define DXIX         (519)
	#define DXX          (520)
	#define DXXI         (521)
	#define DXXII        (522)
	#define DXXIII       (523)
	#define DXXIV        (524)
	#define DXXV         (525)
	#define DXXVI        (526)
	#define DXXVII       (527)
	#define DXXVIII      (528)
	#define DXXIX        (529)
	#define DXXX         (530)
	#define DXXXI        (531)
	#define DXXXII       (532)
	#define DXXXIII      (533)
	#define DXXXIV       (534)
	#define DXXXV        (535)
	#define DXXXVI       (536)
	#define DXXXVII      (537)
	#define DXXXVIII     (538)
	#define DXXXIX       (539)
	#define DXL          (540)
	#define DXLI         (541)
	#define DXLII        (542)
	#define DXLIII       (543)
	#define DXLIV        (544)
	#define DXLV         (545)
	#define DXLVI        (546)
	#define DXLVII       (547)
	#define DXLVIII      (548)
	#define DXLIX        (549)
	#define DL           (550)
	#define DLI          (551)
	#define DLII         (552)
	#define DLIII        (553)
	#define DLIV         (554)
	#define DLV          (555)
	#define DLVI         (556)
	#define DLVII        (557)
	#define DLVIII       (558)
	#define DLIX         (559)
	#define DLX          (560)
	#define DLXI         (561)
	#define DLXII        (562)
	#define DLXIII       (563)
	#define DLXIV        (564)
	#define DLXV         (565)
	#define DLXVI        (566)
	#define DLXVII       (567)
	#define DLXVIII      (568)
	#define DLXIX        (569)
	#define DLXX         (570)
	#define DLXXI        (571)
	#define DLXXII       (572)
	#define DLXXIII      (573)
	#define DLXXIV       (574)
	#define DLXXV        (575)
	#define DLXXVI       (576)
	#define DLXXVII      (577)
	#define DLXXVIII     (578)
	#define DLXXIX       (579)
	#define DLXXX        (580)
	#define DLXXXI       (581)
	#define DLXXXII      (582)
	#define DLXXXIII     (583)
	#define DLXXXIV      (584)
	#define DLXXXV       (585)
	#define DLXXXVI      (586)
	#define DLXXXVII     (587)
	#define DLXXXVIII    (588)
	#define DLXXXIX      (589)
	#define DXC          (590)
	#define DXCI         (591)
	#define DXCII        (592)
	#define DXCIII       (593)
	#define DXCIV        (594)
	#define DXCV         (595)
	#define DXCVI        (596)
	#define DXCVII       (597)
	#define DXCVIII      (598)
	#define DXCIX        (599)
	#define DC           (600)
	#define DCI          (601)
	#define DCII         (602)
	#define DCIII        (603)
	#define DCIV         (604)
	#define DCV          (605)
	#define DCVI         (606)
	#define DCVII        (607)
	#define DCVIII       (608)
	#define DCIX         (609)
	#define DCX          (610)
	#define DCXI         (611)
	#define DCXII        (612)
	#define DCXIII       (613)
	#define DCXIV        (614)
	#define DCXV         (615)
	#define DCXVI        (616)
	#define DCXVII       (617)
	#define DCXVIII      (618)
	#define DCXIX        (619)
	#define DCXX         (620)
	#define DCXXI        (621)
	#define DCXXII       (622)
	#define DCXXIII      (623)
	#define DCXXIV       (624)
	#define DCXXV        (625)
	#define DCXXVI       (626)
	#define DCXXVII      (627)
	#define DCXXVIII     (628)
	#define DCXXIX       (629)
	#define DCXXX        (630)
	#define DCXXXI       (631)
	#define DCXXXII      (632)
	#define DCXXXIII     (633)
	#define DCXXXIV      (634)
	#define DCXXXV       (635)
	#define DCXXXVI      (636)
	#define DCXXXVII     (637)
	#define DCXXXVIII    (638)
	#define DCXXXIX      (639)
	#define DCXL         (640)
	#define DCXLI        (641)
	#define DCXLII       (642)
	#define DCXLIII      (643)
	#define DCXLIV       (644)
	#define DCXLV        (645)
	#define DCXLVI       (646)
	#define DCXLVII      (647)
	#define DCXLVIII     (648)
	#define DCXLIX       (649)
	#define DCL          (650)
	#define DCLI         (651)
	#define DCLII        (652)
	#define DCLIII       (653)
	#define DCLIV        (654)
	#define DCLV         (655)
	#define DCLVI        (656)
	#define DCLVII       (657)
	#define DCLVIII      (658)
	#define DCLIX        (659)
	#define DCLX         (660)
	#define DCLXI        (661)
	#define DCLXII       (662)
	#define DCLXIII      (663)
	#define DCLXIV       (664)
	#define DCLXV        (665)
	#define DCLXVI       (666)
	#define DCLXVII      (667)
	#define DCLXVIII     (668)
	#define DCLXIX       (669)
	#define DCLXX        (670)
	#define DCLXXI       (671)
	#define DCLXXII      (672)
	#define DCLXXIII     (673)
	#define DCLXXIV      (674)
	#define DCLXXV       (675)
	#define DCLXXVI      (676)
	#define DCLXXVII     (677)
	#define DCLXXVIII    (678)
	#define DCLXXIX      (679)
	#define DCLXXX       (680)
	#define DCLXXXI      (681)
	#define DCLXXXII     (682)
	#define DCLXXXIII    (683)
	#define DCLXXXIV     (684)
	#define DCLXXXV      (685)
	#define DCLXXXVI     (686)
	#define DCLXXXVII    (687)
	#define DCLXXXVIII   (688)
	#define DCLXXXIX     (689)
	#define DCXC         (690)
	#define DCXCI        (691)
	#define DCXCII       (692)
	#define DCXCIII      (693)
	#define DCXCIV       (694)
	#define DCXCV        (695)
	#define DCXCVI       (696)
	#define DCXCVII      (697)
	#define DCXCVIII     (698)
	#define DCXCIX       (699)
	#define DCC          (700)
	#define DCCI         (701)
	#define DCCII        (702)
	#define DCCIII       (703)
	#define DCCIV        (704)
	#define DCCV         (705)
	#define DCCVI        (706)
	#define DCCVII       (707)
	#define DCCVIII      (708)
	#define DCCIX        (709)
	#define DCCX         (710)
	#define DCCXI        (711)
	#define DCCXII       (712)
	#define DCCXIII      (713)
	#define DCCXIV       (714)
	#define DCCXV        (715)
	#define DCCXVI       (716)
	#define DCCXVII      (717)
	#define DCCXVIII     (718)
	#define DCCXIX       (719)
	#define DCCXX        (720)
	#define DCCXXI       (721)
	#define DCCXXII      (722)
	#define DCCXXIII     (723)
	#define DCCXXIV      (724)
	#define DCCXXV       (725)
	#define DCCXXVI      (726)
	#define DCCXXVII     (727)
	#define DCCXXVIII    (728)
	#define DCCXXIX      (729)
	#define DCCXXX       (730)
	#define DCCXXXI      (731)
	#define DCCXXXII     (732)
	#define DCCXXXIII    (733)
	#define DCCXXXIV     (734)
	#define DCCXXXV      (735)
	#define DCCXXXVI     (736)
	#define DCCXXXVII    (737)
	#define DCCXXXVIII   (738)
	#define DCCXXXIX     (739)
	#define DCCXL        (740)
	#define DCCXLI       (741)
	#define DCCXLII      (742)
	#define DCCXLIII     (743)
	#define DCCXLIV      (744)
	#define DCCXLV       (745)
	#define DCCXLVI      (746)
	#define DCCXLVII     (747)
	#define DCCXLVIII    (748)
	#define DCCXLIX      (749)
	#define DCCL         (750)
	#define DCCLI        (751)
	#define DCCLII       (752)
	#define DCCLIII      (753)
	#define DCCLIV       (754)
	#define DCCLV        (755)
	#define DCCLVI       (756)
	#define DCCLVII      (757)
	#define DCCLVIII     (758)
	#define DCCLIX       (759)
	#define DCCLX        (760)
	#define DCCLXI       (761)
	#define DCCLXII      (762)
	#define DCCLXIII     (763)
	#define DCCLXIV      (764)
	#define DCCLXV       (765)
	#define DCCLXVI      (766)
	#define DCCLXVII     (767)
	#define DCCLXVIII    (768)
	#define DCCLXIX      (769)
	#define DCCLXX       (770)
	#define DCCLXXI      (771)
	#define DCCLXXII     (772)
	#define DCCLXXIII    (773)
	#define DCCLXXIV     (774)
	#define DCCLXXV      (775)
	#define DCCLXXVI     (776)
	#define DCCLXXVII    (777)
	#define DCCLXXVIII   (778)
	#define DCCLXXIX     (779)
	#define DCCLXXX      (780)
	#define DCCLXXXI     (781)
	#define DCCLXXXII    (782)
	#define DCCLXXXIII   (783)
	#define DCCLXXXIV    (784)
	#define DCCLXXXV     (785)
	#define DCCLXXXVI    (786)
	#define DCCLXXXVII   (787)
	#define DCCLXXXVIII  (788)
	#define DCCLXXXIX    (789)
	#define DCCXC        (790)
	#define DCCXCI       (791)
	#define DCCXCII      (792)
	#define DCCXCIII     (793)
	#define DCCXCIV      (794)
	#define DCCXCV       (795)
	#define DCCXCVI      (796)
	#define DCCXCVII     (797)
	#define DCCXCVIII    (798)
	#define DCCXCIX      (799)
	#define DCCC         (800)
	#define DCCCI        (801)
	#define DCCCII       (802)
	#define DCCCIII      (803)
	#define DCCCIV       (804)
	#define DCCCV        (805)
	#define DCCCVI       (806)
	#define DCCCVII      (807)
	#define DCCCVIII     (808)
	#define DCCCIX       (809)
	#define DCCCX        (810)
	#define DCCCXI       (811)
	#define DCCCXII      (812)
	#define DCCCXIII     (813)
	#define DCCCXIV      (814)
	#define DCCCXV       (815)
	#define DCCCXVI      (816)
	#define DCCCXVII     (817)
	#define DCCCXVIII    (818)
	#define DCCCXIX      (819)
	#define DCCCXX       (820)
	#define DCCCXXI      (821)
	#define DCCCXXII     (822)
	#define DCCCXXIII    (823)
	#define DCCCXXIV     (824)
	#define DCCCXXV      (825)
	#define DCCCXXVI     (826)
	#define DCCCXXVII    (827)
	#define DCCCXXVIII   (828)
	#define DCCCXXIX     (829)
	#define DCCCXXX      (830)
	#define DCCCXXXI     (831)
	#define DCCCXXXII    (832)
	#define DCCCXXXIII   (833)
	#define DCCCXXXIV    (834)
	#define DCCCXXXV     (835)
	#define DCCCXXXVI    (836)
	#define DCCCXXXVII   (837)
	#define DCCCXXXVIII  (838)
	#define DCCCXXXIX    (839)
	#define DCCCXL       (840)
	#define DCCCXLI      (841)
	#define DCCCXLII     (842)
	#define DCCCXLIII    (843)
	#define DCCCXLIV     (844)
	#define DCCCXLV      (845)
	#define DCCCXLVI     (846)
	#define DCCCXLVII    (847)
	#define DCCCXLVIII   (848)
	#define DCCCXLIX     (849)
	#define DCCCL        (850)
	#define DCCCLI       (851)
	#define DCCCLII      (852)
	#define DCCCLIII     (853)
	#define DCCCLIV      (854)
	#define DCCCLV       (855)
	#define DCCCLVI      (856)
	#define DCCCLVII     (857)
	#define DCCCLVIII    (858)
	#define DCCCLIX      (859)
	#define DCCCLX       (860)
	#define DCCCLXI      (861)
	#define DCCCLXII     (862)
	#define DCCCLXIII    (863)
	#define DCCCLXIV     (864)
	#define DCCCLXV      (865)
	#define DCCCLXVI     (866)
	#define DCCCLXVII    (867)
	#define DCCCLXVIII   (868)
	#define DCCCLXIX     (869)
	#define DCCCLXX      (870)
	#define DCCCLXXI     (871)
	#define DCCCLXXII    (872)
	#define DCCCLXXIII   (873)
	#define DCCCLXXIV    (874)
	#define DCCCLXXV     (875)
	#define DCCCLXXVI    (876)
	#define DCCCLXXVII   (877)
	#define DCCCLXXVIII  (878)
	#define DCCCLXXIX    (879)
	#define DCCCLXXX     (880)
	#define DCCCLXXXI    (881)
	#define DCCCLXXXII   (882)
	#define DCCCLXXXIII  (883)
	#define DCCCLXXXIV   (884)
	#define DCCCLXXXV    (885)
	#define DCCCLXXXVI   (886)
	#define DCCCLXXXVII  (887)
	#define DCCCLXXXVIII (888)
	#define DCCCLXXXIX   (889)
	#define DCCCXC       (890)
	#define DCCCXCI      (891)
	#define DCCCXCII     (892)
	#define DCCCXCIII    (893)
	#define DCCCXCIV     (894)
	#define DCCCXCV      (895)
	#define DCCCXCVI     (896)
	#define DCCCXCVII    (897)
	#define DCCCXCVIII   (898)
	#define DCCCXCIX     (899)
	#define CM           (900)
	#define CMI          (901)
	#define CMII         (902)
	#define CMIII        (903)
	#define CMIV         (904)
	#define CMV          (905)
	#define CMVI         (906)
	#define CMVII        (907)
	#define CMVIII       (908)
	#define CMIX         (909)
	#define CMX          (910)
	#define CMXI         (911)
	#define CMXII        (912)
	#define CMXIII       (913)
	#define CMXIV        (914)
	#define CMXV         (915)
	#define CMXVI        (916)
	#define CMXVII       (917)
	#define CMXVIII      (918)
	#define CMXIX        (919)
	#define CMXX         (920)
	#define CMXXI        (921)
	#define CMXXII       (922)
	#define CMXXIII      (923)
	#define CMXXIV       (924)
	#define CMXXV        (925)
	#define CMXXVI       (926)
	#define CMXXVII      (927)
	#define CMXXVIII     (928)
	#define CMXXIX       (929)
	#define CMXXX        (930)
	#define CMXXXI       (931)
	#define CMXXXII      (932)
	#define CMXXXIII     (933)
	#define CMXXXIV      (934)
	#define CMXXXV       (935)
	#define CMXXXVI      (936)
	#define CMXXXVII     (937)
	#define CMXXXVIII    (938)
	#define CMXXXIX      (939)
	#define CMXL         (940)
	#define CMXLI        (941)
	#define CMXLII       (942)
	#define CMXLIII      (943)
	#define CMXLIV       (944)
	#define CMXLV        (945)
	#define CMXLVI       (946)
	#define CMXLVII      (947)
	#define CMXLVIII     (948)
	#define CMXLIX       (949)
	#define CML          (950)
	#define CMLI         (951)
	#define CMLII        (952)
	#define CMLIII       (953)
	#define CMLIV        (954)
	#define CMLV         (955)
	#define CMLVI        (956)
	#define CMLVII       (957)
	#define CMLVIII      (958)
	#define CMLIX        (959)
	#define CMLX         (960)
	#define CMLXI        (961)
	#define CMLXII       (962)
	#define CMLXIII      (963)
	#define CMLXIV       (964)
	#define CMLXV        (965)
	#define CMLXVI       (966)
	#define CMLXVII      (967)
	#define CMLXVIII     (968)
	#define CMLXIX       (969)
	#define CMLXX        (970)
	#define CMLXXI       (971)
	#define CMLXXII      (972)
	#define CMLXXIII     (973)
	#define CMLXXIV      (974)
	#define CMLXXV       (975)
	#define CMLXXVI      (976)
	#define CMLXXVII     (977)
	#define CMLXXVIII    (978)
	#define CMLXXIX      (979)
	#define CMLXXX       (980)
	#define CMLXXXI      (981)
	#define CMLXXXII     (982)
	#define CMLXXXIII    (983)
	#define CMLXXXIV     (984)
	#define CMLXXXV      (985)
	#define CMLXXXVI     (986)
	#define CMLXXXVII    (987)
	#define CMLXXXVIII   (988)
	#define CMLXXXIX     (989)
	#define CMXC         (990)
	#define CMXCI        (991)
	#define CMXCII       (992)
	#define CMXCIII      (993)
	#define CMXCIV       (994)
	#define CMXCV        (995)
	#define CMXCVI       (996)
	#define CMXCVII      (997)
	#define CMXCVIII     (998)
	#define CMXCIX       (999)
	#define M            (1000)
	#define MI           (1001)
	#define MII          (1002)
	#define MIII         (1003)
	#define MIV          (1004)
	#define MV           (1005)
	#define MVI          (1006)
	#define MVII         (1007)
	#define MVIII        (1008)
	#define MIX          (1009)
	#define MX           (1010)
	#define MXI          (1011)
	#define MXII         (1012)
	#define MXIII        (1013)
	#define MXIV         (1014)
	#define MXV          (1015)
	#define MXVI         (1016)
	#define MXVII        (1017)
	#define MXVIII       (1018)
	#define MXIX         (1019)
	#define MXX          (1020)
	#define MXXI         (1021)
	#define MXXII        (1022)
	#define MXXIII       (1023)
	#define MXXIV        (1024)
#endif

