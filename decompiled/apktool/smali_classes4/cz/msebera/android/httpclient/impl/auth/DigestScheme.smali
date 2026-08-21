.class public Lcz/msebera/android/httpclient/impl/auth/DigestScheme;
.super Lcz/msebera/android/httpclient/impl/auth/RFC2617Scheme;
.source "DigestScheme.java"


# annotations
.annotation build Lcz/msebera/android/httpclient/annotation/NotThreadSafe;
.end annotation


# static fields
.field private static final HEXADECIMAL:[C

.field private static final QOP_AUTH:I = 0x2

.field private static final QOP_AUTH_INT:I = 0x1

.field private static final QOP_MISSING:I = 0x0

.field private static final QOP_UNKNOWN:I = -0x1

.field private static final serialVersionUID:J = 0x35e669eae4be3904L


# instance fields
.field private a1:Ljava/lang/String;

.field private a2:Ljava/lang/String;

.field private cnonce:Ljava/lang/String;

.field private complete:Z

.field private lastNonce:Ljava/lang/String;

.field private nounceCount:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/16 v0, 0x10

    .line 86
    new-array v0, v0, [C

    fill-array-data v0, :array_0

    sput-object v0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->HEXADECIMAL:[C

    return-void

    :array_0
    .array-data 2
        0x30s
        0x31s
        0x32s
        0x33s
        0x34s
        0x35s
        0x36s
        0x37s
        0x38s
        0x39s
        0x61s
        0x62s
        0x63s
        0x64s
        0x65s
        0x66s
    .end array-data
.end method

.method public constructor <init>()V
    .locals 1

    .line 127
    sget-object v0, Lcz/msebera/android/httpclient/Consts;->ASCII:Ljava/nio/charset/Charset;

    invoke-direct {p0, v0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;-><init>(Ljava/nio/charset/Charset;)V

    return-void
.end method

.method public constructor <init>(Lcz/msebera/android/httpclient/auth/ChallengeState;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 123
    invoke-direct {p0, p1}, Lcz/msebera/android/httpclient/impl/auth/RFC2617Scheme;-><init>(Lcz/msebera/android/httpclient/auth/ChallengeState;)V

    return-void
.end method

.method public constructor <init>(Ljava/nio/charset/Charset;)V
    .locals 0

    .line 109
    invoke-direct {p0, p1}, Lcz/msebera/android/httpclient/impl/auth/RFC2617Scheme;-><init>(Ljava/nio/charset/Charset;)V

    const/4 p1, 0x0

    .line 110
    iput-boolean p1, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->complete:Z

    return-void
.end method

.method public static createCnonce()Ljava/lang/String;
    .locals 2

    .line 483
    new-instance v0, Ljava/security/SecureRandom;

    invoke-direct {v0}, Ljava/security/SecureRandom;-><init>()V

    const/16 v1, 0x8

    .line 484
    new-array v1, v1, [B

    .line 485
    invoke-virtual {v0, v1}, Ljava/security/SecureRandom;->nextBytes([B)V

    .line 486
    invoke-static {v1}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->encode([B)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private createDigestHeader(Lcz/msebera/android/httpclient/auth/Credentials;Lcz/msebera/android/httpclient/HttpRequest;)Lcz/msebera/android/httpclient/Header;
    .locals 27
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcz/msebera/android/httpclient/auth/AuthenticationException;
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v0, p2

    const-string v2, "uri"

    .line 258
    invoke-virtual {v1, v2}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "realm"

    .line 259
    invoke-virtual {v1, v4}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "nonce"

    .line 260
    invoke-virtual {v1, v6}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "opaque"

    .line 261
    invoke-virtual {v1, v8}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    const-string v10, "methodname"

    .line 262
    invoke-virtual {v1, v10}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    const-string v11, "algorithm"

    .line 263
    invoke-virtual {v1, v11}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    const-string v13, "MD5"

    if-nez v12, :cond_0

    move-object v12, v13

    .line 269
    :cond_0
    new-instance v14, Ljava/util/HashSet;

    const/16 v15, 0x8

    invoke-direct {v14, v15}, Ljava/util/HashSet;-><init>(I)V

    const-string v15, "qop"

    move-object/from16 v16, v13

    .line 271
    invoke-virtual {v1, v15}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    move-object/from16 v17, v8

    const-string v8, "auth-int"

    move-object/from16 v19, v9

    const-string v9, "auth"

    move-object/from16 v20, v11

    if-eqz v13, :cond_4

    .line 273
    new-instance v11, Ljava/util/StringTokenizer;

    move-object/from16 v21, v15

    const-string v15, ","

    invoke-direct {v11, v13, v15}, Ljava/util/StringTokenizer;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 274
    :goto_0
    invoke-virtual {v11}, Ljava/util/StringTokenizer;->hasMoreTokens()Z

    move-result v15

    if-eqz v15, :cond_1

    .line 275
    invoke-virtual {v11}, Ljava/util/StringTokenizer;->nextToken()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v15}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v15

    move-object/from16 v22, v11

    .line 276
    sget-object v11, Ljava/util/Locale;->ROOT:Ljava/util/Locale;

    invoke-virtual {v15, v11}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v11

    invoke-interface {v14, v11}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    move-object/from16 v11, v22

    goto :goto_0

    .line 278
    :cond_1
    instance-of v11, v0, Lcz/msebera/android/httpclient/HttpEntityEnclosingRequest;

    if-eqz v11, :cond_2

    invoke-interface {v14, v8}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_2

    const/4 v11, 0x1

    goto :goto_1

    .line 280
    :cond_2
    invoke-interface {v14, v9}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_3

    const/4 v11, 0x2

    goto :goto_1

    :cond_3
    const/4 v11, -0x1

    goto :goto_1

    :cond_4
    move-object/from16 v21, v15

    const/4 v11, 0x0

    :goto_1
    const/4 v15, -0x1

    if-eq v11, v15, :cond_1a

    const-string v13, "charset"

    .line 291
    invoke-virtual {v1, v13}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    if-nez v13, :cond_5

    const-string v13, "ISO-8859-1"

    :cond_5
    const-string v15, "MD5-sess"

    .line 297
    invoke-virtual {v12, v15}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v15

    if-eqz v15, :cond_6

    move-object/from16 v15, v16

    goto :goto_2

    :cond_6
    move-object v15, v12

    .line 303
    :goto_2
    :try_start_0
    invoke-static {v15}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->createMessageDigest(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v15
    :try_end_0
    .catch Lcz/msebera/android/httpclient/impl/auth/UnsupportedDigestAlgorithmException; {:try_start_0 .. :try_end_0} :catch_1

    .line 308
    invoke-interface/range {p1 .. p1}, Lcz/msebera/android/httpclient/auth/Credentials;->getUserPrincipal()Ljava/security/Principal;

    move-result-object v16

    move-object/from16 v18, v8

    invoke-interface/range {v16 .. v16}, Ljava/security/Principal;->getName()Ljava/lang/String;

    move-result-object v8

    move-object/from16 v16, v2

    .line 309
    invoke-interface/range {p1 .. p1}, Lcz/msebera/android/httpclient/auth/Credentials;->getPassword()Ljava/lang/String;

    move-result-object v2

    move-object/from16 v22, v6

    .line 311
    iget-object v6, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->lastNonce:Ljava/lang/String;

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    move-object/from16 v23, v4

    if-eqz v6, :cond_7

    move-object v6, v5

    .line 312
    iget-wide v4, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->nounceCount:J

    const-wide/16 v24, 0x1

    add-long v4, v4, v24

    iput-wide v4, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->nounceCount:J

    goto :goto_3

    :cond_7
    move-object v6, v5

    const-wide/16 v4, 0x1

    .line 314
    iput-wide v4, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->nounceCount:J

    const/4 v4, 0x0

    .line 315
    iput-object v4, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->cnonce:Ljava/lang/String;

    .line 316
    iput-object v7, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->lastNonce:Ljava/lang/String;

    .line 318
    :goto_3
    new-instance v4, Ljava/lang/StringBuilder;

    const/16 v5, 0x100

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(I)V

    .line 319
    new-instance v5, Ljava/util/Formatter;

    move-object/from16 v24, v9

    sget-object v9, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-direct {v5, v4, v9}, Ljava/util/Formatter;-><init>(Ljava/lang/Appendable;Ljava/util/Locale;)V

    move-object/from16 v25, v14

    const/4 v9, 0x1

    .line 320
    new-array v14, v9, [Ljava/lang/Object;

    move-object/from16 v26, v10

    iget-wide v9, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->nounceCount:J

    invoke-static {v9, v10}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    const/4 v10, 0x0

    aput-object v9, v14, v10

    const-string v9, "%08x"

    invoke-virtual {v5, v9, v14}, Ljava/util/Formatter;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;

    .line 321
    invoke-virtual {v5}, Ljava/util/Formatter;->close()V

    .line 322
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 324
    iget-object v9, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->cnonce:Ljava/lang/String;

    if-nez v9, :cond_8

    .line 325
    invoke-static {}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->createCnonce()Ljava/lang/String;

    move-result-object v9

    iput-object v9, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->cnonce:Ljava/lang/String;

    :cond_8
    const/4 v9, 0x0

    .line 328
    iput-object v9, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a1:Ljava/lang/String;

    .line 329
    iput-object v9, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a2:Ljava/lang/String;

    const-string v10, "MD5-sess"

    .line 331
    invoke-virtual {v12, v10}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v10

    const/16 v14, 0x3a

    if-eqz v10, :cond_9

    const/4 v10, 0x0

    .line 337
    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->setLength(I)V

    .line 338
    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 339
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v13}, Lcz/msebera/android/httpclient/util/EncodingUtils;->getBytes(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v2

    invoke-virtual {v15, v2}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v2

    invoke-static {v2}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->encode([B)Ljava/lang/String;

    move-result-object v2

    .line 340
    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->setLength(I)V

    .line 341
    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->cnonce:Ljava/lang/String;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 342
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a1:Ljava/lang/String;

    goto :goto_4

    :cond_9
    const/4 v10, 0x0

    .line 345
    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->setLength(I)V

    .line 346
    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 347
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a1:Ljava/lang/String;

    .line 350
    :goto_4
    iget-object v2, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a1:Ljava/lang/String;

    invoke-static {v2, v13}, Lcz/msebera/android/httpclient/util/EncodingUtils;->getBytes(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v2

    invoke-virtual {v15, v2}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v2

    invoke-static {v2}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->encode([B)Ljava/lang/String;

    move-result-object v2

    const/4 v10, 0x2

    if-ne v11, v10, :cond_a

    .line 354
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v9, v26

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a2:Ljava/lang/String;

    move-object/from16 v14, v24

    goto/16 :goto_6

    :cond_a
    move-object/from16 v9, v26

    const/4 v10, 0x1

    if-ne v11, v10, :cond_f

    .line 358
    instance-of v10, v0, Lcz/msebera/android/httpclient/HttpEntityEnclosingRequest;

    if-eqz v10, :cond_b

    .line 359
    check-cast v0, Lcz/msebera/android/httpclient/HttpEntityEnclosingRequest;

    invoke-interface {v0}, Lcz/msebera/android/httpclient/HttpEntityEnclosingRequest;->getEntity()Lcz/msebera/android/httpclient/HttpEntity;

    move-result-object v0

    goto :goto_5

    :cond_b
    const/4 v0, 0x0

    :goto_5
    if-eqz v0, :cond_d

    .line 361
    invoke-interface {v0}, Lcz/msebera/android/httpclient/HttpEntity;->isRepeatable()Z

    move-result v10

    if-nez v10, :cond_d

    move-object/from16 v14, v24

    move-object/from16 v10, v25

    .line 363
    invoke-interface {v10, v14}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 365
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v9, 0x3a

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a2:Ljava/lang/String;

    const/4 v11, 0x2

    goto :goto_6

    .line 367
    :cond_c
    new-instance v0, Lcz/msebera/android/httpclient/auth/AuthenticationException;

    const-string v2, "Qop auth-int cannot be used with a non-repeatable entity"

    invoke-direct {v0, v2}, Lcz/msebera/android/httpclient/auth/AuthenticationException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_d
    move-object/from16 v14, v24

    .line 371
    new-instance v10, Lcz/msebera/android/httpclient/impl/auth/HttpEntityDigester;

    invoke-direct {v10, v15}, Lcz/msebera/android/httpclient/impl/auth/HttpEntityDigester;-><init>(Ljava/security/MessageDigest;)V

    if-eqz v0, :cond_e

    .line 374
    :try_start_1
    invoke-interface {v0, v10}, Lcz/msebera/android/httpclient/HttpEntity;->writeTo(Ljava/io/OutputStream;)V

    .line 376
    :cond_e
    invoke-virtual {v10}, Lcz/msebera/android/httpclient/impl/auth/HttpEntityDigester;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 380
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v9, 0x3a

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Lcz/msebera/android/httpclient/impl/auth/HttpEntityDigester;->getDigest()[B

    move-result-object v9

    invoke-static {v9}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->encode([B)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a2:Ljava/lang/String;

    goto :goto_6

    :catch_0
    move-exception v0

    .line 378
    new-instance v2, Lcz/msebera/android/httpclient/auth/AuthenticationException;

    const-string v3, "I/O error reading entity content"

    invoke-direct {v2, v3, v0}, Lcz/msebera/android/httpclient/auth/AuthenticationException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v2

    :cond_f
    move-object/from16 v14, v24

    .line 383
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v9, 0x3a

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a2:Ljava/lang/String;

    .line 386
    :goto_6
    iget-object v0, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a2:Ljava/lang/String;

    invoke-static {v0, v13}, Lcz/msebera/android/httpclient/util/EncodingUtils;->getBytes(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v0

    invoke-virtual {v15, v0}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v0

    invoke-static {v0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->encode([B)Ljava/lang/String;

    move-result-object v0

    if-nez v11, :cond_10

    const/4 v9, 0x0

    .line 392
    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->setLength(I)V

    .line 393
    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v10, 0x3a

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 394
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_8

    :cond_10
    const/4 v9, 0x0

    const/16 v10, 0x3a

    .line 396
    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->setLength(I)V

    .line 397
    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->cnonce:Ljava/lang/String;

    .line 398
    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/4 v2, 0x1

    if-ne v11, v2, :cond_11

    move-object/from16 v2, v18

    goto :goto_7

    :cond_11
    move-object v2, v14

    :goto_7
    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 399
    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 400
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 403
    :goto_8
    invoke-static {v0}, Lcz/msebera/android/httpclient/util/EncodingUtils;->getAsciiBytes(Ljava/lang/String;)[B

    move-result-object v0

    invoke-virtual {v15, v0}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v0

    invoke-static {v0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->encode([B)Ljava/lang/String;

    move-result-object v0

    .line 405
    new-instance v2, Lcz/msebera/android/httpclient/util/CharArrayBuffer;

    const/16 v4, 0x80

    invoke-direct {v2, v4}, Lcz/msebera/android/httpclient/util/CharArrayBuffer;-><init>(I)V

    .line 406
    invoke-virtual/range {p0 .. p0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->isProxy()Z

    move-result v4

    if-eqz v4, :cond_12

    const-string v4, "Proxy-Authorization"

    .line 407
    invoke-virtual {v2, v4}, Lcz/msebera/android/httpclient/util/CharArrayBuffer;->append(Ljava/lang/String;)V

    goto :goto_9

    :cond_12
    const-string v4, "Authorization"

    .line 409
    invoke-virtual {v2, v4}, Lcz/msebera/android/httpclient/util/CharArrayBuffer;->append(Ljava/lang/String;)V

    :goto_9
    const-string v4, ": Digest "

    .line 411
    invoke-virtual {v2, v4}, Lcz/msebera/android/httpclient/util/CharArrayBuffer;->append(Ljava/lang/String;)V

    .line 413
    new-instance v4, Ljava/util/ArrayList;

    const/16 v10, 0x14

    invoke-direct {v4, v10}, Ljava/util/ArrayList;-><init>(I)V

    .line 414
    new-instance v10, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    const-string v13, "username"

    invoke-direct {v10, v13, v8}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 415
    new-instance v8, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    move-object/from16 v10, v23

    invoke-direct {v8, v10, v6}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 416
    new-instance v6, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    move-object/from16 v8, v22

    invoke-direct {v6, v8, v7}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 417
    new-instance v6, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    move-object/from16 v7, v16

    invoke-direct {v6, v7, v3}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 418
    new-instance v3, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    const-string v6, "response"

    invoke-direct {v3, v6, v0}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz v11, :cond_14

    .line 421
    new-instance v0, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    const/4 v3, 0x1

    if-ne v11, v3, :cond_13

    move-object/from16 v14, v18

    :cond_13
    move-object/from16 v3, v21

    invoke-direct {v0, v3, v14}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 422
    new-instance v0, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    const-string v6, "nc"

    invoke-direct {v0, v6, v5}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 423
    new-instance v0, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    iget-object v5, v1, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->cnonce:Ljava/lang/String;

    const-string v6, "cnonce"

    invoke-direct {v0, v6, v5}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_a

    :cond_14
    move-object/from16 v3, v21

    .line 426
    :goto_a
    new-instance v0, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    move-object/from16 v5, v20

    invoke-direct {v0, v5, v12}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz v19, :cond_15

    .line 428
    new-instance v0, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    move-object/from16 v7, v17

    move-object/from16 v6, v19

    invoke-direct {v0, v7, v6}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v4, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_15
    const/4 v0, 0x0

    .line 431
    :goto_b
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v6

    if-ge v0, v6, :cond_19

    .line 432
    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcz/msebera/android/httpclient/message/BasicNameValuePair;

    if-lez v0, :cond_16

    const-string v7, ", "

    .line 434
    invoke-virtual {v2, v7}, Lcz/msebera/android/httpclient/util/CharArrayBuffer;->append(Ljava/lang/String;)V

    .line 436
    :cond_16
    invoke-virtual {v6}, Lcz/msebera/android/httpclient/message/BasicNameValuePair;->getName()Ljava/lang/String;

    move-result-object v7

    const-string v8, "nc"

    .line 437
    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_18

    invoke-virtual {v3, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_18

    .line 438
    invoke-virtual {v5, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_17

    goto :goto_c

    :cond_17
    const/4 v7, 0x0

    goto :goto_d

    :cond_18
    :goto_c
    const/4 v7, 0x1

    .line 439
    :goto_d
    sget-object v8, Lcz/msebera/android/httpclient/message/BasicHeaderValueFormatter;->INSTANCE:Lcz/msebera/android/httpclient/message/BasicHeaderValueFormatter;

    const/4 v10, 0x1

    xor-int/2addr v7, v10

    invoke-virtual {v8, v2, v6, v7}, Lcz/msebera/android/httpclient/message/BasicHeaderValueFormatter;->formatNameValuePair(Lcz/msebera/android/httpclient/util/CharArrayBuffer;Lcz/msebera/android/httpclient/NameValuePair;Z)Lcz/msebera/android/httpclient/util/CharArrayBuffer;

    add-int/lit8 v0, v0, 0x1

    goto :goto_b

    .line 441
    :cond_19
    new-instance v0, Lcz/msebera/android/httpclient/message/BufferedHeader;

    invoke-direct {v0, v2}, Lcz/msebera/android/httpclient/message/BufferedHeader;-><init>(Lcz/msebera/android/httpclient/util/CharArrayBuffer;)V

    return-object v0

    .line 305
    :catch_1
    new-instance v0, Lcz/msebera/android/httpclient/auth/AuthenticationException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unsuppported digest algorithm: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Lcz/msebera/android/httpclient/auth/AuthenticationException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 288
    :cond_1a
    new-instance v0, Lcz/msebera/android/httpclient/auth/AuthenticationException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "None of the qop methods is supported: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Lcz/msebera/android/httpclient/auth/AuthenticationException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private static createMessageDigest(Ljava/lang/String;)Ljava/security/MessageDigest;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcz/msebera/android/httpclient/impl/auth/UnsupportedDigestAlgorithmException;
        }
    .end annotation

    .line 240
    :try_start_0
    invoke-static {p0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 242
    :catch_0
    new-instance v0, Lcz/msebera/android/httpclient/impl/auth/UnsupportedDigestAlgorithmException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Unsupported algorithm in HTTP Digest authentication: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Lcz/msebera/android/httpclient/impl/auth/UnsupportedDigestAlgorithmException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method static encode([B)Ljava/lang/String;
    .locals 7

    .line 464
    array-length v0, p0

    mul-int/lit8 v1, v0, 0x2

    .line 465
    new-array v1, v1, [C

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_0

    .line 467
    aget-byte v3, p0, v2

    and-int/lit8 v3, v3, 0xf

    .line 468
    aget-byte v4, p0, v2

    and-int/lit16 v4, v4, 0xf0

    shr-int/lit8 v4, v4, 0x4

    mul-int/lit8 v5, v2, 0x2

    .line 469
    sget-object v6, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->HEXADECIMAL:[C

    aget-char v4, v6, v4

    aput-char v4, v1, v5

    add-int/lit8 v5, v5, 0x1

    .line 470
    aget-char v3, v6, v3

    aput-char v3, v1, v5

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 473
    :cond_0
    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v1}, Ljava/lang/String;-><init>([C)V

    return-object p0
.end method


# virtual methods
.method public authenticate(Lcz/msebera/android/httpclient/auth/Credentials;Lcz/msebera/android/httpclient/HttpRequest;)Lcz/msebera/android/httpclient/Header;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcz/msebera/android/httpclient/auth/AuthenticationException;
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 196
    new-instance v0, Lcz/msebera/android/httpclient/protocol/BasicHttpContext;

    invoke-direct {v0}, Lcz/msebera/android/httpclient/protocol/BasicHttpContext;-><init>()V

    invoke-virtual {p0, p1, p2, v0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->authenticate(Lcz/msebera/android/httpclient/auth/Credentials;Lcz/msebera/android/httpclient/HttpRequest;Lcz/msebera/android/httpclient/protocol/HttpContext;)Lcz/msebera/android/httpclient/Header;

    move-result-object p1

    return-object p1
.end method

.method public authenticate(Lcz/msebera/android/httpclient/auth/Credentials;Lcz/msebera/android/httpclient/HttpRequest;Lcz/msebera/android/httpclient/protocol/HttpContext;)Lcz/msebera/android/httpclient/Header;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcz/msebera/android/httpclient/auth/AuthenticationException;
        }
    .end annotation

    const-string p3, "Credentials"

    .line 219
    invoke-static {p1, p3}, Lcz/msebera/android/httpclient/util/Args;->notNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    const-string p3, "HTTP request"

    .line 220
    invoke-static {p2, p3}, Lcz/msebera/android/httpclient/util/Args;->notNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    const-string p3, "realm"

    .line 221
    invoke-virtual {p0, p3}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    if-eqz p3, :cond_2

    const-string p3, "nonce"

    .line 224
    invoke-virtual {p0, p3}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    if-eqz p3, :cond_1

    .line 228
    invoke-virtual {p0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameters()Ljava/util/Map;

    move-result-object p3

    invoke-interface {p2}, Lcz/msebera/android/httpclient/HttpRequest;->getRequestLine()Lcz/msebera/android/httpclient/RequestLine;

    move-result-object v0

    invoke-interface {v0}, Lcz/msebera/android/httpclient/RequestLine;->getMethod()Ljava/lang/String;

    move-result-object v0

    const-string v1, "methodname"

    invoke-interface {p3, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 229
    invoke-virtual {p0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameters()Ljava/util/Map;

    move-result-object p3

    invoke-interface {p2}, Lcz/msebera/android/httpclient/HttpRequest;->getRequestLine()Lcz/msebera/android/httpclient/RequestLine;

    move-result-object v0

    invoke-interface {v0}, Lcz/msebera/android/httpclient/RequestLine;->getUri()Ljava/lang/String;

    move-result-object v0

    const-string v1, "uri"

    invoke-interface {p3, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p3, "charset"

    .line 230
    invoke-virtual {p0, p3}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    .line 232
    invoke-virtual {p0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameters()Ljava/util/Map;

    move-result-object v0

    invoke-virtual {p0, p2}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getCredentialsCharset(Lcz/msebera/android/httpclient/HttpRequest;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, p3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 234
    :cond_0
    invoke-direct {p0, p1, p2}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->createDigestHeader(Lcz/msebera/android/httpclient/auth/Credentials;Lcz/msebera/android/httpclient/HttpRequest;)Lcz/msebera/android/httpclient/Header;

    move-result-object p1

    return-object p1

    .line 225
    :cond_1
    new-instance p1, Lcz/msebera/android/httpclient/auth/AuthenticationException;

    const-string p2, "missing nonce in challenge"

    invoke-direct {p1, p2}, Lcz/msebera/android/httpclient/auth/AuthenticationException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 222
    :cond_2
    new-instance p1, Lcz/msebera/android/httpclient/auth/AuthenticationException;

    const-string p2, "missing realm in challenge"

    invoke-direct {p1, p2}, Lcz/msebera/android/httpclient/auth/AuthenticationException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method getA1()Ljava/lang/String;
    .locals 1

    .line 449
    iget-object v0, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a1:Ljava/lang/String;

    return-object v0
.end method

.method getA2()Ljava/lang/String;
    .locals 1

    .line 453
    iget-object v0, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->a2:Ljava/lang/String;

    return-object v0
.end method

.method getCnonce()Ljava/lang/String;
    .locals 1

    .line 445
    iget-object v0, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->cnonce:Ljava/lang/String;

    return-object v0
.end method

.method public getSchemeName()Ljava/lang/String;
    .locals 1

    const-string v0, "digest"

    return-object v0
.end method

.method public isComplete()Z
    .locals 2

    const-string v0, "stale"

    .line 156
    invoke-virtual {p0, v0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "true"

    .line 157
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 160
    :cond_0
    iget-boolean v0, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->complete:Z

    return v0
.end method

.method public isConnectionBased()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public overrideParamter(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 185
    invoke-virtual {p0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameters()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public processChallenge(Lcz/msebera/android/httpclient/Header;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcz/msebera/android/httpclient/auth/MalformedChallengeException;
        }
    .end annotation

    .line 141
    invoke-super {p0, p1}, Lcz/msebera/android/httpclient/impl/auth/RFC2617Scheme;->processChallenge(Lcz/msebera/android/httpclient/Header;)V

    const/4 p1, 0x1

    .line 142
    iput-boolean p1, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->complete:Z

    .line 143
    invoke-virtual {p0}, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->getParameters()Ljava/util/Map;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Map;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    .line 144
    :cond_0
    new-instance p1, Lcz/msebera/android/httpclient/auth/MalformedChallengeException;

    const-string v0, "Authentication challenge is empty"

    invoke-direct {p1, v0}, Lcz/msebera/android/httpclient/auth/MalformedChallengeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 491
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "DIGEST [complete="

    .line 492
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->complete:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", nonce="

    .line 493
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->lastNonce:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", nc="

    .line 494
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcz/msebera/android/httpclient/impl/auth/DigestScheme;->nounceCount:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "]"

    .line 495
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 496
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
