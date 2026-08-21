.class public final Lcom/bianfeng/ymnsdk/utilslib/security/Base64;
.super Ljava/lang/Object;
.source "Base64.java"


# static fields
.field private static final BASELENGTH:I = 0x80

.field private static final EIGHTBIT:I = 0x8

.field private static final FOURBYTE:I = 0x4

.field private static final LOOKUPLENGTH:I = 0x40

.field private static final PAD:C = '='

.field private static final SIGN:I = -0x80

.field private static final SIXTEENBIT:I = 0x10

.field private static final TWENTYFOURBITGROUP:I = 0x18

.field private static final base64Alphabet:[B

.field private static final fDebug:Z

.field private static final lookUpBase64Alphabet:[C


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 18
    const/16 v0, 0x80

    new-array v1, v0, [B

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    .line 19
    const/16 v1, 0x40

    new-array v1, v1, [C

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->lookUpBase64Alphabet:[C

    .line 22
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 23
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    const/4 v3, -0x1

    aput-byte v3, v2, v1

    .line 22
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 25
    .end local v1    # "i":I
    :cond_0
    const/16 v0, 0x5a

    .local v0, "i":I
    :goto_1
    const/16 v1, 0x41

    if-lt v0, v1, :cond_1

    .line 26
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    add-int/lit8 v2, v0, -0x41

    int-to-byte v2, v2

    aput-byte v2, v1, v0

    .line 25
    add-int/lit8 v0, v0, -0x1

    goto :goto_1

    .line 28
    .end local v0    # "i":I
    :cond_1
    const/16 v0, 0x7a

    .restart local v0    # "i":I
    :goto_2
    const/16 v1, 0x61

    if-lt v0, v1, :cond_2

    .line 29
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    add-int/lit8 v2, v0, -0x61

    add-int/lit8 v2, v2, 0x1a

    int-to-byte v2, v2

    aput-byte v2, v1, v0

    .line 28
    add-int/lit8 v0, v0, -0x1

    goto :goto_2

    .line 32
    .end local v0    # "i":I
    :cond_2
    const/16 v0, 0x39

    .restart local v0    # "i":I
    :goto_3
    const/16 v1, 0x30

    if-lt v0, v1, :cond_3

    .line 33
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    add-int/lit8 v2, v0, -0x30

    add-int/lit8 v2, v2, 0x34

    int-to-byte v2, v2

    aput-byte v2, v1, v0

    .line 32
    add-int/lit8 v0, v0, -0x1

    goto :goto_3

    .line 36
    .end local v0    # "i":I
    :cond_3
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    const/16 v1, 0x3e

    const/16 v2, 0x2b

    aput-byte v1, v0, v2

    .line 37
    const/16 v3, 0x3f

    const/16 v4, 0x2f

    aput-byte v3, v0, v4

    .line 39
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_4
    const/16 v5, 0x19

    if-gt v0, v5, :cond_4

    .line 40
    sget-object v5, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->lookUpBase64Alphabet:[C

    add-int/lit8 v6, v0, 0x41

    int-to-char v6, v6

    aput-char v6, v5, v0

    .line 39
    add-int/lit8 v0, v0, 0x1

    goto :goto_4

    .line 43
    .end local v0    # "i":I
    :cond_4
    const/16 v0, 0x1a

    .restart local v0    # "i":I
    const/4 v5, 0x0

    .local v5, "j":I
    :goto_5
    const/16 v6, 0x33

    if-gt v0, v6, :cond_5

    .line 44
    sget-object v6, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->lookUpBase64Alphabet:[C

    add-int/lit8 v7, v5, 0x61

    int-to-char v7, v7

    aput-char v7, v6, v0

    .line 43
    add-int/lit8 v0, v0, 0x1

    add-int/lit8 v5, v5, 0x1

    goto :goto_5

    .line 47
    .end local v0    # "i":I
    .end local v5    # "j":I
    :cond_5
    const/16 v0, 0x34

    .restart local v0    # "i":I
    const/4 v5, 0x0

    .restart local v5    # "j":I
    :goto_6
    const/16 v6, 0x3d

    if-gt v0, v6, :cond_6

    .line 48
    sget-object v6, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->lookUpBase64Alphabet:[C

    add-int/lit8 v7, v5, 0x30

    int-to-char v7, v7

    aput-char v7, v6, v0

    .line 47
    add-int/lit8 v0, v0, 0x1

    add-int/lit8 v5, v5, 0x1

    goto :goto_6

    .line 50
    .end local v0    # "i":I
    .end local v5    # "j":I
    :cond_6
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->lookUpBase64Alphabet:[C

    aput-char v2, v0, v1

    .line 51
    aput-char v4, v0, v3

    .line 53
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static decode(Ljava/lang/String;)[B
    .locals 20
    .param p0, "encoded"    # Ljava/lang/String;

    .line 175
    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 176
    return-object v0

    .line 179
    :cond_0
    invoke-virtual/range {p0 .. p0}, Ljava/lang/String;->toCharArray()[C

    move-result-object v1

    .line 181
    .local v1, "base64Data":[C
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->removeWhiteSpace([C)I

    move-result v2

    .line 183
    .local v2, "len":I
    rem-int/lit8 v3, v2, 0x4

    if-eqz v3, :cond_1

    .line 184
    return-object v0

    .line 187
    :cond_1
    div-int/lit8 v3, v2, 0x4

    .line 189
    .local v3, "numberQuadruple":I
    const/4 v4, 0x0

    if-nez v3, :cond_2

    .line 190
    new-array v0, v4, [B

    return-object v0

    .line 193
    :cond_2
    const/4 v5, 0x0

    .line 194
    .local v5, "decodedData":[B
    const/4 v6, 0x0

    .local v6, "b1":B
    const/4 v7, 0x0

    .local v7, "b2":B
    const/4 v8, 0x0

    .local v8, "b3":B
    const/4 v9, 0x0

    .line 195
    .local v9, "b4":B
    const/4 v10, 0x0

    .local v10, "d1":C
    const/4 v11, 0x0

    .local v11, "d2":C
    const/4 v12, 0x0

    .local v12, "d3":C
    const/4 v13, 0x0

    .line 197
    .local v13, "d4":C
    const/4 v14, 0x0

    .line 198
    .local v14, "i":I
    const/4 v15, 0x0

    .line 199
    .local v15, "encodedIndex":I
    const/16 v16, 0x0

    .line 200
    .local v16, "dataIndex":I
    mul-int/lit8 v4, v3, 0x3

    new-array v4, v4, [B

    .line 202
    .end local v5    # "decodedData":[B
    .local v4, "decodedData":[B
    :goto_0
    add-int/lit8 v5, v3, -0x1

    if-ge v14, v5, :cond_7

    .line 204
    add-int/lit8 v5, v16, 0x1

    .end local v16    # "dataIndex":I
    .local v5, "dataIndex":I
    aget-char v16, v1, v16

    move/from16 v10, v16

    invoke-static/range {v16 .. v16}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isData(C)Z

    move-result v16

    if-eqz v16, :cond_5

    add-int/lit8 v16, v5, 0x1

    .end local v5    # "dataIndex":I
    .restart local v16    # "dataIndex":I
    aget-char v5, v1, v5

    move v11, v5

    .line 205
    invoke-static {v5}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isData(C)Z

    move-result v5

    if-eqz v5, :cond_6

    add-int/lit8 v5, v16, 0x1

    .end local v16    # "dataIndex":I
    .restart local v5    # "dataIndex":I
    aget-char v16, v1, v16

    move/from16 v12, v16

    .line 206
    invoke-static/range {v16 .. v16}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isData(C)Z

    move-result v16

    if-eqz v16, :cond_4

    add-int/lit8 v16, v5, 0x1

    .end local v5    # "dataIndex":I
    .restart local v16    # "dataIndex":I
    aget-char v5, v1, v5

    move v13, v5

    .line 207
    invoke-static {v5}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isData(C)Z

    move-result v5

    if-nez v5, :cond_3

    goto :goto_1

    .line 211
    :cond_3
    sget-object v5, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    aget-byte v6, v5, v10

    .line 212
    aget-byte v7, v5, v11

    .line 213
    aget-byte v8, v5, v12

    .line 214
    aget-byte v9, v5, v13

    .line 216
    add-int/lit8 v5, v15, 0x1

    .end local v15    # "encodedIndex":I
    .local v5, "encodedIndex":I
    shl-int/lit8 v18, v6, 0x2

    shr-int/lit8 v19, v7, 0x4

    or-int v0, v18, v19

    int-to-byte v0, v0

    aput-byte v0, v4, v15

    .line 217
    add-int/lit8 v0, v5, 0x1

    .end local v5    # "encodedIndex":I
    .local v0, "encodedIndex":I
    and-int/lit8 v15, v7, 0xf

    shl-int/lit8 v15, v15, 0x4

    shr-int/lit8 v18, v8, 0x2

    and-int/lit8 v18, v18, 0xf

    or-int v15, v15, v18

    int-to-byte v15, v15

    aput-byte v15, v4, v5

    .line 218
    add-int/lit8 v15, v0, 0x1

    .end local v0    # "encodedIndex":I
    .restart local v15    # "encodedIndex":I
    shl-int/lit8 v5, v8, 0x6

    or-int/2addr v5, v9

    int-to-byte v5, v5

    aput-byte v5, v4, v0

    .line 202
    add-int/lit8 v14, v14, 0x1

    const/4 v0, 0x0

    goto :goto_0

    .line 206
    .end local v16    # "dataIndex":I
    .local v5, "dataIndex":I
    :cond_4
    move/from16 v16, v5

    goto :goto_1

    .line 204
    :cond_5
    move/from16 v16, v5

    .line 208
    .end local v5    # "dataIndex":I
    .restart local v16    # "dataIndex":I
    :cond_6
    :goto_1
    const/4 v0, 0x0

    return-object v0

    .line 221
    :cond_7
    add-int/lit8 v0, v16, 0x1

    .end local v16    # "dataIndex":I
    .local v0, "dataIndex":I
    aget-char v5, v1, v16

    move v10, v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isData(C)Z

    move-result v5

    if-eqz v5, :cond_f

    add-int/lit8 v5, v0, 0x1

    .end local v0    # "dataIndex":I
    .restart local v5    # "dataIndex":I
    aget-char v0, v1, v0

    move v11, v0

    .line 222
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isData(C)Z

    move-result v0

    if-nez v0, :cond_8

    move-object/from16 v18, v1

    move/from16 v16, v2

    move v0, v5

    const/4 v1, 0x0

    goto/16 :goto_3

    .line 226
    :cond_8
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    aget-byte v6, v0, v10

    .line 227
    aget-byte v0, v0, v11

    .line 229
    .end local v7    # "b2":B
    .local v0, "b2":B
    add-int/lit8 v7, v5, 0x1

    .end local v5    # "dataIndex":I
    .local v7, "dataIndex":I
    aget-char v5, v1, v5

    .line 230
    .end local v12    # "d3":C
    .local v5, "d3":C
    add-int/lit8 v12, v7, 0x1

    .end local v7    # "dataIndex":I
    .local v12, "dataIndex":I
    aget-char v7, v1, v7

    .line 231
    .end local v13    # "d4":C
    .local v7, "d4":C
    invoke-static {v5}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isData(C)Z

    move-result v13

    if-eqz v13, :cond_a

    invoke-static {v7}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isData(C)Z

    move-result v13

    if-nez v13, :cond_9

    move-object/from16 v18, v1

    goto :goto_2

    .line 256
    :cond_9
    sget-object v13, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    aget-byte v8, v13, v5

    .line 257
    aget-byte v9, v13, v7

    .line 258
    add-int/lit8 v13, v15, 0x1

    .end local v15    # "encodedIndex":I
    .local v13, "encodedIndex":I
    shl-int/lit8 v16, v6, 0x2

    shr-int/lit8 v17, v0, 0x4

    move-object/from16 v18, v1

    .end local v1    # "base64Data":[C
    .local v18, "base64Data":[C
    or-int v1, v16, v17

    int-to-byte v1, v1

    aput-byte v1, v4, v15

    .line 259
    add-int/lit8 v1, v13, 0x1

    .end local v13    # "encodedIndex":I
    .local v1, "encodedIndex":I
    and-int/lit8 v15, v0, 0xf

    shl-int/lit8 v15, v15, 0x4

    shr-int/lit8 v16, v8, 0x2

    and-int/lit8 v16, v16, 0xf

    or-int v15, v15, v16

    int-to-byte v15, v15

    aput-byte v15, v4, v13

    .line 260
    add-int/lit8 v13, v1, 0x1

    .end local v1    # "encodedIndex":I
    .restart local v13    # "encodedIndex":I
    shl-int/lit8 v15, v8, 0x6

    or-int/2addr v15, v9

    int-to-byte v15, v15

    aput-byte v15, v4, v1

    .line 264
    return-object v4

    .line 231
    .end local v13    # "encodedIndex":I
    .end local v18    # "base64Data":[C
    .local v1, "base64Data":[C
    .restart local v15    # "encodedIndex":I
    :cond_a
    move-object/from16 v18, v1

    .line 232
    .end local v1    # "base64Data":[C
    .restart local v18    # "base64Data":[C
    :goto_2
    invoke-static {v5}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isPad(C)Z

    move-result v1

    if-eqz v1, :cond_c

    invoke-static {v7}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isPad(C)Z

    move-result v1

    if-eqz v1, :cond_c

    .line 233
    and-int/lit8 v1, v0, 0xf

    if-eqz v1, :cond_b

    .line 235
    const/4 v1, 0x0

    return-object v1

    .line 237
    :cond_b
    mul-int/lit8 v1, v14, 0x3

    add-int/lit8 v1, v1, 0x1

    new-array v1, v1, [B

    .line 238
    .local v1, "tmp":[B
    mul-int/lit8 v13, v14, 0x3

    move/from16 v16, v2

    const/4 v2, 0x0

    .end local v2    # "len":I
    .local v16, "len":I
    invoke-static {v4, v2, v1, v2, v13}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 239
    shl-int/lit8 v2, v6, 0x2

    shr-int/lit8 v13, v0, 0x4

    or-int/2addr v2, v13

    int-to-byte v2, v2

    aput-byte v2, v1, v15

    .line 240
    return-object v1

    .line 232
    .end local v1    # "tmp":[B
    .end local v16    # "len":I
    .restart local v2    # "len":I
    :cond_c
    move/from16 v16, v2

    .line 241
    .end local v2    # "len":I
    .restart local v16    # "len":I
    invoke-static {v5}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isPad(C)Z

    move-result v1

    if-nez v1, :cond_e

    invoke-static {v7}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isPad(C)Z

    move-result v1

    if-eqz v1, :cond_e

    .line 242
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    aget-byte v1, v1, v5

    .line 243
    .end local v8    # "b3":B
    .local v1, "b3":B
    and-int/lit8 v2, v1, 0x3

    if-eqz v2, :cond_d

    .line 245
    const/4 v2, 0x0

    return-object v2

    .line 247
    :cond_d
    mul-int/lit8 v2, v14, 0x3

    add-int/lit8 v2, v2, 0x2

    new-array v2, v2, [B

    .line 248
    .local v2, "tmp":[B
    mul-int/lit8 v8, v14, 0x3

    const/4 v13, 0x0

    invoke-static {v4, v13, v2, v13, v8}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 249
    add-int/lit8 v8, v15, 0x1

    .end local v15    # "encodedIndex":I
    .local v8, "encodedIndex":I
    shl-int/lit8 v13, v6, 0x2

    shr-int/lit8 v17, v0, 0x4

    or-int v13, v13, v17

    int-to-byte v13, v13

    aput-byte v13, v2, v15

    .line 250
    and-int/lit8 v13, v0, 0xf

    shl-int/lit8 v13, v13, 0x4

    shr-int/lit8 v15, v1, 0x2

    and-int/lit8 v15, v15, 0xf

    or-int/2addr v13, v15

    int-to-byte v13, v13

    aput-byte v13, v2, v8

    .line 251
    return-object v2

    .line 253
    .end local v1    # "b3":B
    .end local v2    # "tmp":[B
    .local v8, "b3":B
    .restart local v15    # "encodedIndex":I
    :cond_e
    const/4 v1, 0x0

    return-object v1

    .line 221
    .end local v5    # "d3":C
    .end local v16    # "len":I
    .end local v18    # "base64Data":[C
    .local v0, "dataIndex":I
    .local v1, "base64Data":[C
    .local v2, "len":I
    .local v7, "b2":B
    .local v12, "d3":C
    .local v13, "d4":C
    :cond_f
    move-object/from16 v18, v1

    move/from16 v16, v2

    const/4 v1, 0x0

    .line 223
    .end local v1    # "base64Data":[C
    .end local v2    # "len":I
    .restart local v16    # "len":I
    .restart local v18    # "base64Data":[C
    :goto_3
    return-object v1
.end method

.method public static encode([B)Ljava/lang/String;
    .locals 21
    .param p0, "binaryData"    # [B

    .line 76
    move-object/from16 v0, p0

    if-nez v0, :cond_0

    .line 77
    const/4 v1, 0x0

    return-object v1

    .line 80
    :cond_0
    array-length v1, v0

    const/16 v2, 0x8

    mul-int/lit8 v1, v1, 0x8

    .line 81
    .local v1, "lengthDataBits":I
    if-nez v1, :cond_1

    .line 82
    const-string v2, ""

    return-object v2

    .line 85
    :cond_1
    rem-int/lit8 v3, v1, 0x18

    .line 86
    .local v3, "fewerThan24bits":I
    div-int/lit8 v4, v1, 0x18

    .line 87
    .local v4, "numberTriplets":I
    if-eqz v3, :cond_2

    add-int/lit8 v5, v4, 0x1

    goto :goto_0

    :cond_2
    move v5, v4

    .line 89
    .local v5, "numberQuartet":I
    :goto_0
    const/4 v6, 0x0

    .line 91
    .local v6, "encodedData":[C
    mul-int/lit8 v7, v5, 0x4

    new-array v6, v7, [C

    .line 93
    const/4 v7, 0x0

    .local v7, "k":B
    const/4 v8, 0x0

    .local v8, "l":B
    const/4 v9, 0x0

    .local v9, "b1":B
    const/4 v10, 0x0

    .local v10, "b2":B
    const/4 v11, 0x0

    .line 95
    .local v11, "b3":B
    const/4 v12, 0x0

    .line 96
    .local v12, "encodedIndex":I
    const/4 v13, 0x0

    .line 101
    .local v13, "dataIndex":I
    const/4 v14, 0x0

    .local v14, "i":I
    :goto_1
    if-ge v14, v4, :cond_6

    .line 102
    add-int/lit8 v15, v13, 0x1

    .end local v13    # "dataIndex":I
    .local v15, "dataIndex":I
    aget-byte v9, v0, v13

    .line 103
    add-int/lit8 v13, v15, 0x1

    .end local v15    # "dataIndex":I
    .restart local v13    # "dataIndex":I
    aget-byte v10, v0, v15

    .line 104
    add-int/lit8 v15, v13, 0x1

    .end local v13    # "dataIndex":I
    .restart local v15    # "dataIndex":I
    aget-byte v11, v0, v13

    .line 110
    and-int/lit8 v13, v10, 0xf

    int-to-byte v8, v13

    .line 111
    and-int/lit8 v13, v9, 0x3

    int-to-byte v7, v13

    .line 113
    and-int/lit8 v13, v9, -0x80

    if-nez v13, :cond_3

    shr-int/lit8 v13, v9, 0x2

    goto :goto_2

    :cond_3
    shr-int/lit8 v13, v9, 0x2

    xor-int/lit16 v13, v13, 0xc0

    :goto_2
    int-to-byte v13, v13

    .line 115
    .local v13, "val1":B
    and-int/lit8 v16, v10, -0x80

    shr-int/lit8 v2, v10, 0x4

    if-nez v16, :cond_4

    goto :goto_3

    :cond_4
    xor-int/lit16 v2, v2, 0xf0

    :goto_3
    int-to-byte v2, v2

    .line 117
    .local v2, "val2":B
    and-int/lit8 v17, v11, -0x80

    if-nez v17, :cond_5

    move/from16 v17, v1

    .end local v1    # "lengthDataBits":I
    .local v17, "lengthDataBits":I
    shr-int/lit8 v1, v11, 0x6

    goto :goto_4

    .end local v17    # "lengthDataBits":I
    .restart local v1    # "lengthDataBits":I
    :cond_5
    move/from16 v17, v1

    .end local v1    # "lengthDataBits":I
    .restart local v17    # "lengthDataBits":I
    shr-int/lit8 v1, v11, 0x6

    xor-int/lit16 v1, v1, 0xfc

    :goto_4
    int-to-byte v1, v1

    .line 126
    .local v1, "val3":B
    add-int/lit8 v18, v12, 0x1

    .end local v12    # "encodedIndex":I
    .local v18, "encodedIndex":I
    sget-object v19, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->lookUpBase64Alphabet:[C

    aget-char v20, v19, v13

    aput-char v20, v6, v12

    .line 127
    add-int/lit8 v12, v18, 0x1

    .end local v18    # "encodedIndex":I
    .restart local v12    # "encodedIndex":I
    shl-int/lit8 v20, v7, 0x4

    or-int v20, v2, v20

    aget-char v20, v19, v20

    aput-char v20, v6, v18

    .line 128
    add-int/lit8 v18, v12, 0x1

    .end local v12    # "encodedIndex":I
    .restart local v18    # "encodedIndex":I
    shl-int/lit8 v20, v8, 0x2

    or-int v20, v20, v1

    aget-char v20, v19, v20

    aput-char v20, v6, v12

    .line 129
    add-int/lit8 v12, v18, 0x1

    .end local v18    # "encodedIndex":I
    .restart local v12    # "encodedIndex":I
    and-int/lit8 v20, v11, 0x3f

    aget-char v19, v19, v20

    aput-char v19, v6, v18

    .line 101
    .end local v1    # "val3":B
    .end local v2    # "val2":B
    .end local v13    # "val1":B
    add-int/lit8 v14, v14, 0x1

    move v13, v15

    move/from16 v1, v17

    const/16 v2, 0x8

    goto :goto_1

    .end local v15    # "dataIndex":I
    .end local v17    # "lengthDataBits":I
    .local v1, "lengthDataBits":I
    .local v13, "dataIndex":I
    :cond_6
    move/from16 v17, v1

    .line 133
    .end local v1    # "lengthDataBits":I
    .end local v14    # "i":I
    .restart local v17    # "lengthDataBits":I
    const/16 v1, 0x3d

    const/16 v2, 0x8

    if-ne v3, v2, :cond_8

    .line 134
    aget-byte v9, v0, v13

    .line 135
    and-int/lit8 v2, v9, 0x3

    int-to-byte v7, v2

    .line 140
    and-int/lit8 v2, v9, -0x80

    if-nez v2, :cond_7

    shr-int/lit8 v2, v9, 0x2

    goto :goto_5

    :cond_7
    shr-int/lit8 v2, v9, 0x2

    xor-int/lit16 v2, v2, 0xc0

    :goto_5
    int-to-byte v2, v2

    .line 142
    .local v2, "val1":B
    add-int/lit8 v14, v12, 0x1

    .end local v12    # "encodedIndex":I
    .local v14, "encodedIndex":I
    sget-object v15, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->lookUpBase64Alphabet:[C

    aget-char v16, v15, v2

    aput-char v16, v6, v12

    .line 143
    add-int/lit8 v12, v14, 0x1

    .end local v14    # "encodedIndex":I
    .restart local v12    # "encodedIndex":I
    shl-int/lit8 v16, v7, 0x4

    aget-char v15, v15, v16

    aput-char v15, v6, v14

    .line 144
    add-int/lit8 v14, v12, 0x1

    .end local v12    # "encodedIndex":I
    .restart local v14    # "encodedIndex":I
    aput-char v1, v6, v12

    .line 145
    add-int/lit8 v12, v14, 0x1

    .end local v14    # "encodedIndex":I
    .restart local v12    # "encodedIndex":I
    aput-char v1, v6, v14

    .end local v2    # "val1":B
    goto :goto_8

    .line 146
    :cond_8
    const/16 v2, 0x10

    if-ne v3, v2, :cond_b

    .line 147
    aget-byte v9, v0, v13

    .line 148
    add-int/lit8 v2, v13, 0x1

    aget-byte v10, v0, v2

    .line 149
    and-int/lit8 v2, v10, 0xf

    int-to-byte v8, v2

    .line 150
    and-int/lit8 v2, v9, 0x3

    int-to-byte v7, v2

    .line 152
    and-int/lit8 v2, v9, -0x80

    if-nez v2, :cond_9

    shr-int/lit8 v2, v9, 0x2

    goto :goto_6

    :cond_9
    shr-int/lit8 v2, v9, 0x2

    xor-int/lit16 v2, v2, 0xc0

    :goto_6
    int-to-byte v2, v2

    .line 154
    .restart local v2    # "val1":B
    and-int/lit8 v14, v10, -0x80

    if-nez v14, :cond_a

    shr-int/lit8 v14, v10, 0x4

    goto :goto_7

    :cond_a
    shr-int/lit8 v14, v10, 0x4

    xor-int/lit16 v14, v14, 0xf0

    :goto_7
    int-to-byte v14, v14

    .line 157
    .local v14, "val2":B
    add-int/lit8 v15, v12, 0x1

    .end local v12    # "encodedIndex":I
    .local v15, "encodedIndex":I
    sget-object v16, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->lookUpBase64Alphabet:[C

    aget-char v18, v16, v2

    aput-char v18, v6, v12

    .line 158
    add-int/lit8 v12, v15, 0x1

    .end local v15    # "encodedIndex":I
    .restart local v12    # "encodedIndex":I
    shl-int/lit8 v18, v7, 0x4

    or-int v18, v14, v18

    aget-char v18, v16, v18

    aput-char v18, v6, v15

    .line 159
    add-int/lit8 v15, v12, 0x1

    .end local v12    # "encodedIndex":I
    .restart local v15    # "encodedIndex":I
    shl-int/lit8 v18, v8, 0x2

    aget-char v16, v16, v18

    aput-char v16, v6, v12

    .line 160
    add-int/lit8 v12, v15, 0x1

    .end local v15    # "encodedIndex":I
    .restart local v12    # "encodedIndex":I
    aput-char v1, v6, v15

    goto :goto_9

    .line 146
    .end local v2    # "val1":B
    .end local v14    # "val2":B
    :cond_b
    :goto_8
    nop

    .line 163
    :goto_9
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, v6}, Ljava/lang/String;-><init>([C)V

    return-object v1
.end method

.method private static isData(C)Z
    .locals 2
    .param p0, "octect"    # C

    .line 64
    const/16 v0, 0x80

    if-ge p0, v0, :cond_0

    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->base64Alphabet:[B

    aget-byte v0, v0, p0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private static isPad(C)Z
    .locals 1
    .param p0, "octect"    # C

    .line 60
    const/16 v0, 0x3d

    if-ne p0, v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private static isWhiteSpace(C)Z
    .locals 1
    .param p0, "octect"    # C

    .line 56
    const/16 v0, 0x20

    if-eq p0, v0, :cond_1

    const/16 v0, 0xd

    if-eq p0, v0, :cond_1

    const/16 v0, 0xa

    if-eq p0, v0, :cond_1

    const/16 v0, 0x9

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method private static removeWhiteSpace([C)I
    .locals 5
    .param p0, "data"    # [C

    .line 275
    if-nez p0, :cond_0

    .line 276
    const/4 v0, 0x0

    return v0

    .line 280
    :cond_0
    const/4 v0, 0x0

    .line 281
    .local v0, "newSize":I
    array-length v1, p0

    .line 282
    .local v1, "len":I
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v1, :cond_2

    .line 283
    aget-char v3, p0, v2

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->isWhiteSpace(C)Z

    move-result v3

    if-nez v3, :cond_1

    .line 284
    add-int/lit8 v3, v0, 0x1

    .end local v0    # "newSize":I
    .local v3, "newSize":I
    aget-char v4, p0, v2

    aput-char v4, p0, v0

    move v0, v3

    .line 282
    .end local v3    # "newSize":I
    .restart local v0    # "newSize":I
    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 287
    .end local v2    # "i":I
    :cond_2
    return v0
.end method
