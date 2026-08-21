.class public final Lcom/loc/es;
.super Ljava/lang/Object;
.source "CollectionManager.java"

# interfaces
.implements Lcom/loc/em;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/es$b;,
        Lcom/loc/es$a;
    }
.end annotation


# static fields
.field private static k:J


# instance fields
.field a:Landroid/content/Context;

.field b:Lcom/loc/ff;

.field c:Lcom/loc/fb;

.field d:Lcom/loc/dw;

.field e:Lcom/loc/bv;

.field private f:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/loc/dc;",
            ">;"
        }
    .end annotation
.end field

.field private g:Landroid/os/Handler;

.field private h:Landroid/location/LocationManager;

.field private i:Lcom/loc/es$a;

.field private volatile j:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method constructor <init>(Landroid/content/Context;)V
    .locals 10

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/loc/es;->a:Landroid/content/Context;

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/loc/es;->f:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/loc/es;->b:Lcom/loc/ff;

    iput-object v0, p0, Lcom/loc/es;->c:Lcom/loc/fb;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/loc/es;->j:Z

    iput-object p1, p0, Lcom/loc/es;->a:Landroid/content/Context;

    new-instance v2, Lcom/loc/bv;

    invoke-direct {v2}, Lcom/loc/bv;-><init>()V

    iput-object v2, p0, Lcom/loc/es;->e:Lcom/loc/bv;

    iget-object v1, p0, Lcom/loc/es;->a:Landroid/content/Context;

    sget-object v3, Lcom/loc/at;->k:Ljava/lang/String;

    const/16 v4, 0x64

    const v5, 0xfa000

    const-string v6, "0"

    invoke-static/range {v1 .. v6}, Lcom/loc/cb;->a(Landroid/content/Context;Lcom/loc/bv;Ljava/lang/String;IILjava/lang/String;)V

    iget-object v0, p0, Lcom/loc/es;->e:Lcom/loc/bv;

    new-instance v1, Lcom/loc/cn;

    sget v2, Lcom/loc/fq;->g:I

    new-instance v9, Lcom/loc/cl;

    sget-boolean v5, Lcom/loc/fq;->e:Z

    sget v6, Lcom/loc/fq;->f:I

    mul-int/lit8 v7, v6, 0xa

    const-string v8, "carrierLocKey"

    move-object v3, v9

    move-object v4, p1

    invoke-direct/range {v3 .. v8}, Lcom/loc/cl;-><init>(Landroid/content/Context;ZIILjava/lang/String;)V

    const-string v3, "kKey"

    invoke-direct {v1, p1, v2, v3, v9}, Lcom/loc/cn;-><init>(Landroid/content/Context;ILjava/lang/String;Lcom/loc/co;)V

    iput-object v1, v0, Lcom/loc/bv;->f:Lcom/loc/co;

    iget-object p1, p0, Lcom/loc/es;->e:Lcom/loc/bv;

    new-instance v0, Lcom/loc/be;

    invoke-direct {v0}, Lcom/loc/be;-><init>()V

    iput-object v0, p1, Lcom/loc/bv;->e:Lcom/loc/bh;

    return-void
.end method

.method private static a([B)I
    .locals 2

    const/4 v0, 0x3

    aget-byte v0, p0, v0

    and-int/lit16 v0, v0, 0xff

    const/4 v1, 0x2

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x8

    or-int/2addr v0, v1

    const/4 v1, 0x1

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x10

    or-int/2addr v0, v1

    const/4 v1, 0x0

    aget-byte p0, p0, v1

    and-int/lit16 p0, p0, 0xff

    shl-int/lit8 p0, p0, 0x18

    or-int/2addr p0, v0

    return p0
.end method

.method static synthetic a(J)J
    .locals 0

    sput-wide p0, Lcom/loc/es;->k:J

    return-wide p0
.end method

.method static synthetic a(Lcom/loc/bl;Lcom/loc/bv;Ljava/util/List;[B)Ljava/util/List;
    .locals 0

    invoke-static {p0, p1, p2, p3}, Lcom/loc/es;->b(Lcom/loc/bl;Lcom/loc/bv;Ljava/util/List;[B)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/loc/bl;Ljava/util/List;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/loc/es;->b(Lcom/loc/bl;Ljava/util/List;)V

    return-void
.end method

.method static synthetic a(Lcom/loc/es;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/loc/es;->j:Z

    return p0
.end method

.method private static a(I)[B
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "AES"

    invoke-static {v1}, Ljavax/crypto/KeyGenerator;->getInstance(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;

    move-result-object v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {v1, p0}, Ljavax/crypto/KeyGenerator;->init(I)V

    invoke-virtual {v1}, Ljavax/crypto/KeyGenerator;->generateKey()Ljavax/crypto/SecretKey;

    move-result-object p0

    invoke-interface {p0}, Ljavax/crypto/SecretKey;->getEncoded()[B

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method static synthetic b(Lcom/loc/es;)Ljava/util/ArrayList;
    .locals 0

    iget-object p0, p0, Lcom/loc/es;->f:Ljava/util/ArrayList;

    return-object p0
.end method

.method private static b(Lcom/loc/bl;Lcom/loc/bv;Ljava/util/List;[B)Ljava/util/List;
    .locals 17
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/loc/bl;",
            "Lcom/loc/bv;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;[B)",
            "Ljava/util/List<",
            "Lcom/loc/dc;",
            ">;"
        }
    .end annotation

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    :try_start_0
    invoke-virtual/range {p0 .. p0}, Lcom/loc/bl;->b()Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_10

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_10

    invoke-virtual {v0}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    array-length v2, v0

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    :goto_0
    if-ge v4, v2, :cond_f

    aget-object v6, v0, v4

    const-string v7, ".0"

    invoke-virtual {v6, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_f

    if-eqz v7, :cond_c

    const/4 v7, 0x0

    :try_start_1
    const-string v8, "\\."

    invoke-virtual {v6, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    aget-object v6, v6, v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_8

    move-object/from16 v8, p0

    :try_start_2
    invoke-virtual {v8, v6}, Lcom/loc/bl;->a(Ljava/lang/String;)Lcom/loc/bl$b;

    move-result-object v9
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_9

    if-nez v9, :cond_1

    if-eqz v9, :cond_d

    :goto_1
    :try_start_3
    invoke-virtual {v9}, Lcom/loc/bl$b;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_c

    goto/16 :goto_c

    :cond_1
    :try_start_4
    invoke-virtual {v9}, Lcom/loc/bl$b;->a()Ljava/io/InputStream;

    move-result-object v7
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_7

    if-nez v7, :cond_3

    if-eqz v7, :cond_2

    :try_start_5
    invoke-virtual {v7}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_2

    :catchall_0
    nop

    :cond_2
    :goto_2
    if-eqz v9, :cond_d

    goto :goto_1

    :cond_3
    const/4 v10, 0x2

    :try_start_6
    new-array v11, v10, [B

    invoke-virtual {v7, v11}, Ljava/io/InputStream;->read([B)I

    invoke-static {v11}, Lcom/loc/fz;->b([B)I

    move-result v11

    if-eqz v11, :cond_9

    const v12, 0xffff

    if-le v11, v12, :cond_4

    goto/16 :goto_8

    :cond_4
    new-array v11, v11, [B

    invoke-virtual {v7, v11}, Ljava/io/InputStream;->read([B)I

    new-array v10, v10, [B

    const/4 v12, 0x0

    :goto_3
    invoke-virtual {v7, v10}, Ljava/io/InputStream;->read([B)I

    move-result v13
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_7

    if-ltz v13, :cond_5

    :try_start_7
    invoke-static {v10}, Lcom/loc/fz;->b([B)I

    move-result v13

    new-array v13, v13, [B

    invoke-virtual {v7, v13}, Ljava/io/InputStream;->read([B)I

    invoke-static {}, Lcom/loc/x;->c()[B

    move-result-object v14

    invoke-static {v11, v13, v14}, Lcom/loc/p;->a([B[B[B)[B

    move-result-object v13

    array-length v14, v13

    add-int/2addr v12, v14

    const/4 v14, 0x4

    new-array v14, v14, [B

    invoke-virtual {v7, v14}, Ljava/io/InputStream;->read([B)I

    invoke-static {v14}, Lcom/loc/es;->a([B)I

    move-result v14

    new-instance v15, Lcom/loc/dc;

    invoke-static {v13}, Lcom/loc/x;->b([B)[B

    move-result-object v13

    invoke-static {}, Lcom/loc/x;->c()[B

    move-result-object v3
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    move-object/from16 v16, v0

    move-object/from16 v0, p3

    :try_start_8
    invoke-static {v0, v13, v3}, Lcom/loc/p;->b([B[B[B)[B

    move-result-object v3

    invoke-direct {v15, v14, v3}, Lcom/loc/dc;-><init>(I[B)V

    invoke-interface {v1, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    move-object/from16 v0, v16

    const/4 v3, 0x0

    goto :goto_3

    :catchall_1
    move-object/from16 v16, v0

    move-object/from16 v0, p3

    :catchall_2
    move-object/from16 v6, p1

    move-object/from16 v3, p2

    goto :goto_a

    :cond_5
    move-object/from16 v16, v0

    move-object/from16 v0, p3

    add-int/2addr v5, v12

    move-object/from16 v3, p2

    :try_start_9
    invoke-interface {v3, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_5

    move-object/from16 v6, p1

    :try_start_a
    iget-object v10, v6, Lcom/loc/bv;->f:Lcom/loc/co;

    invoke-virtual {v10}, Lcom/loc/co;->b()I

    move-result v10
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_a

    if-le v5, v10, :cond_7

    if-eqz v7, :cond_6

    :try_start_b
    invoke-virtual {v7}, Ljava/io/InputStream;->close()V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_3

    goto :goto_4

    :catchall_3
    nop

    :cond_6
    :goto_4
    if-eqz v9, :cond_f

    :goto_5
    :try_start_c
    invoke-virtual {v9}, Lcom/loc/bl$b;->close()V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_e

    goto :goto_e

    :cond_7
    if-eqz v7, :cond_8

    :try_start_d
    invoke-virtual {v7}, Ljava/io/InputStream;->close()V
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_4

    goto :goto_6

    :catchall_4
    nop

    :cond_8
    :goto_6
    if-eqz v9, :cond_e

    :goto_7
    :try_start_e
    invoke-virtual {v9}, Lcom/loc/bl$b;->close()V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_d

    goto :goto_d

    :catchall_5
    move-object/from16 v6, p1

    goto :goto_a

    :cond_9
    :goto_8
    if-eqz v7, :cond_a

    :try_start_f
    invoke-virtual {v7}, Ljava/io/InputStream;->close()V
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_6

    goto :goto_9

    :catchall_6
    nop

    :cond_a
    :goto_9
    if-eqz v9, :cond_f

    goto :goto_5

    :catchall_7
    move-object/from16 v6, p1

    move-object/from16 v3, p2

    move-object/from16 v16, v0

    move-object/from16 v0, p3

    goto :goto_a

    :catchall_8
    move-object/from16 v8, p0

    :catchall_9
    move-object/from16 v6, p1

    move-object/from16 v3, p2

    move-object/from16 v16, v0

    move-object/from16 v0, p3

    move-object v9, v7

    :catchall_a
    :goto_a
    if-eqz v7, :cond_b

    :try_start_10
    invoke-virtual {v7}, Ljava/io/InputStream;->close()V
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_b

    goto :goto_b

    :catchall_b
    nop

    :cond_b
    :goto_b
    if-eqz v9, :cond_e

    goto :goto_7

    :cond_c
    move-object/from16 v8, p0

    :catchall_c
    :cond_d
    :goto_c
    move-object/from16 v6, p1

    move-object/from16 v3, p2

    move-object/from16 v16, v0

    move-object/from16 v0, p3

    :catchall_d
    :cond_e
    :goto_d
    add-int/lit8 v4, v4, 0x1

    move-object/from16 v0, v16

    const/4 v3, 0x0

    goto/16 :goto_0

    :catchall_e
    :cond_f
    :goto_e
    return-object v1

    :catchall_f
    move-exception v0

    const-string v2, "aps"

    const-string v3, "upc"

    invoke-static {v0, v2, v3}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    return-object v1
.end method

.method private static b(Lcom/loc/bl;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/loc/bl;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_1

    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/loc/bl;->c(Ljava/lang/String;)Z

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/loc/bl;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string p1, "aps"

    const-string v0, "dlo"

    invoke-static {p0, p1, v0}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private static b(I)[B
    .locals 3

    const/4 v0, 0x4

    new-array v0, v0, [B

    shr-int/lit8 v1, p0, 0x18

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    const/4 v2, 0x0

    aput-byte v1, v0, v2

    shr-int/lit8 v1, p0, 0x10

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    const/4 v2, 0x1

    aput-byte v1, v0, v2

    shr-int/lit8 v1, p0, 0x8

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    const/4 v2, 0x2

    aput-byte v1, v0, v2

    and-int/lit16 p0, p0, 0xff

    int-to-byte p0, p0

    const/4 v1, 0x3

    aput-byte p0, v0, v1

    return-object v0
.end method

.method static synthetic c(Lcom/loc/es;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/es;->g()V

    return-void
.end method

.method private static c(I)[B
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [B

    and-int/lit16 v1, p0, 0xff

    int-to-byte v1, v1

    const/4 v2, 0x1

    aput-byte v1, v0, v2

    const v1, 0xff00

    and-int/2addr p0, v1

    shr-int/lit8 p0, p0, 0x8

    int-to-byte p0, p0

    const/4 v1, 0x0

    aput-byte p0, v0, v1

    return-object v0
.end method

.method static synthetic f()[B
    .locals 1

    const/16 v0, 0x80

    invoke-static {v0}, Lcom/loc/es;->a(I)[B

    move-result-object v0

    return-object v0
.end method

.method private g()V
    .locals 7

    const/4 v0, 0x1

    :try_start_0
    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object v1, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/fz;->m(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/loc/es;->f:Ljava/util/ArrayList;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/loc/es;->f:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-nez v0, :cond_1

    goto/16 :goto_1

    :cond_1
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/loc/es;->f:Ljava/util/ArrayList;

    monitor-enter v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v2, p0, Lcom/loc/es;->f:Ljava/util/ArrayList;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    iget-object v2, p0, Lcom/loc/es;->f:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->clear()V

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    new-instance v1, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v1}, Ljava/io/ByteArrayOutputStream;-><init>()V

    const/16 v2, 0x100

    invoke-static {v2}, Lcom/loc/es;->a(I)[B

    move-result-object v2

    if-nez v2, :cond_2

    return-void

    :cond_2
    array-length v3, v2

    invoke-static {v3}, Lcom/loc/es;->c(I)[B

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v1, v2}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/loc/dc;

    invoke-virtual {v3}, Lcom/loc/dc;->b()[B

    move-result-object v4

    array-length v5, v4

    const/16 v6, 0xa

    if-lt v5, v6, :cond_3

    array-length v5, v4

    const v6, 0xffff

    if-gt v5, v6, :cond_3

    invoke-static {}, Lcom/loc/x;->c()[B

    move-result-object v5

    invoke-static {v2, v4, v5}, Lcom/loc/p;->b([B[B[B)[B

    move-result-object v4

    array-length v5, v4

    invoke-static {v5}, Lcom/loc/es;->c(I)[B

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v1, v4}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v3}, Lcom/loc/dc;->a()I

    move-result v3

    invoke-static {v3}, Lcom/loc/es;->b(I)[B

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    goto :goto_0

    :cond_4
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/loc/es;->e:Lcom/loc/bv;

    invoke-static {v1, v0, v2}, Lcom/loc/bw;->a(Ljava/lang/String;[BLcom/loc/bv;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_0
    move-exception v0

    :try_start_3
    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :cond_5
    :goto_1
    return-void

    :catchall_1
    move-exception v0

    const-string v1, "clm"

    const-string v2, "wtD"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/loc/ek;)Lcom/loc/el;
    .locals 2

    :try_start_0
    new-instance v0, Lcom/loc/fl;

    invoke-direct {v0}, Lcom/loc/fl;-><init>()V

    iget-object v1, p1, Lcom/loc/ek;->b:Ljava/util/Map;

    invoke-virtual {v0, v1}, Lcom/loc/fl;->a(Ljava/util/Map;)V

    iget-object v1, p1, Lcom/loc/ek;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/loc/fl;->b(Ljava/lang/String;)V

    iget-object p1, p1, Lcom/loc/ek;->d:[B

    invoke-virtual {v0, p1}, Lcom/loc/fl;->a([B)V

    invoke-static {}, Lcom/loc/bo;->a()Lcom/loc/bo;

    invoke-static {v0}, Lcom/loc/bo;->a(Lcom/loc/bt;)Lcom/loc/bu;

    move-result-object p1

    new-instance v0, Lcom/loc/el;

    invoke-direct {v0}, Lcom/loc/el;-><init>()V

    iget-object v1, p1, Lcom/loc/bu;->a:[B

    iput-object v1, v0, Lcom/loc/el;->c:[B

    iget-object p1, p1, Lcom/loc/bu;->b:Ljava/util/Map;

    iput-object p1, v0, Lcom/loc/el;->b:Ljava/util/Map;

    const/16 p1, 0xc8

    iput p1, v0, Lcom/loc/el;->a:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const/4 p1, 0x0

    return-object p1
.end method

.method final a()V
    .locals 3

    iget-object v0, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/fz;->m(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/es;->h:Landroid/location/LocationManager;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/es;->h:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    :cond_1
    iget-object v0, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    invoke-virtual {v0}, Lcom/loc/es$a;->a()V

    :cond_2
    iget-boolean v0, p0, Lcom/loc/es;->j:Z

    if-eqz v0, :cond_3

    invoke-direct {p0}, Lcom/loc/es;->g()V

    iget-object v0, p0, Lcom/loc/es;->b:Lcom/loc/ff;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/loc/ff;->a(Lcom/loc/es;)V

    iget-object v0, p0, Lcom/loc/es;->c:Lcom/loc/fb;

    invoke-virtual {v0, v1}, Lcom/loc/fb;->a(Lcom/loc/es;)V

    iput-object v1, p0, Lcom/loc/es;->c:Lcom/loc/fb;

    iput-object v1, p0, Lcom/loc/es;->b:Lcom/loc/ff;

    iput-object v1, p0, Lcom/loc/es;->g:Landroid/os/Handler;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/loc/es;->j:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception v0

    const-string v1, "clm"

    const-string v2, "stc"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Landroid/location/Location;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/loc/es;->g:Landroid/os/Handler;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/es;->g:Landroid/os/Handler;

    new-instance v1, Lcom/loc/es$b;

    invoke-direct {v1, p0, p1}, Lcom/loc/es$b;-><init>(Lcom/loc/es;Landroid/location/Location;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    const-string v0, "cl"

    const-string v1, "olcc"

    invoke-static {p1, v0, v1}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/loc/fb;Lcom/loc/ff;Landroid/os/Handler;)V
    .locals 6

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-boolean v1, p0, Lcom/loc/es;->j:Z

    if-eqz v1, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_7

    if-eqz p2, :cond_7

    if-nez p3, :cond_1

    goto/16 :goto_0

    :cond_1
    iget-object v1, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/fz;->m(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_2

    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void

    :cond_2
    iput-boolean v0, p0, Lcom/loc/es;->j:Z

    iput-object p1, p0, Lcom/loc/es;->c:Lcom/loc/fb;

    iput-object p2, p0, Lcom/loc/es;->b:Lcom/loc/ff;

    invoke-virtual {p2, p0}, Lcom/loc/ff;->a(Lcom/loc/es;)V

    iget-object p1, p0, Lcom/loc/es;->c:Lcom/loc/fb;

    invoke-virtual {p1, p0}, Lcom/loc/fb;->a(Lcom/loc/es;)V

    iput-object p3, p0, Lcom/loc/es;->g:Landroid/os/Handler;

    :try_start_0
    iget-object p1, p0, Lcom/loc/es;->h:Landroid/location/LocationManager;

    if-nez p1, :cond_3

    if-eqz p3, :cond_3

    iget-object p1, p0, Lcom/loc/es;->a:Landroid/content/Context;

    const-string p2, "location"

    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/loc/es;->h:Landroid/location/LocationManager;

    :cond_3
    iget-object p1, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    if-nez p1, :cond_4

    new-instance p1, Lcom/loc/es$a;

    invoke-direct {p1, p0}, Lcom/loc/es$a;-><init>(Lcom/loc/es;)V

    iput-object p1, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    :cond_4
    iget-object p1, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    invoke-virtual {p1, p0}, Lcom/loc/es$a;->a(Lcom/loc/es;)V

    iget-object p1, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/loc/es;->h:Landroid/location/LocationManager;

    if-eqz p1, :cond_5

    iget-object v0, p0, Lcom/loc/es;->h:Landroid/location/LocationManager;

    const-string v1, "passive"

    const-wide/16 v2, 0x3e8

    const/high16 v4, -0x40800000    # -1.0f

    iget-object v5, p0, Lcom/loc/es;->i:Lcom/loc/es$a;

    invoke-virtual/range {v0 .. v5}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V

    :cond_5
    iget-object p1, p0, Lcom/loc/es;->d:Lcom/loc/dw;

    if-nez p1, :cond_6

    new-instance p1, Lcom/loc/dw;

    const-string v1, "6.4.0"

    iget-object p2, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {p2}, Lcom/loc/l;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "S128DF1572465B890OE3F7A13167KLEI"

    iget-object p2, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {p2}, Lcom/loc/l;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    move-object v0, p1

    move-object v5, p0

    invoke-direct/range {v0 .. v5}, Lcom/loc/dw;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/loc/em;)V

    iput-object p1, p0, Lcom/loc/es;->d:Lcom/loc/dw;

    invoke-static {}, Lcom/loc/o;->k()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/loc/dw;->a(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    iget-object p2, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {p2}, Lcom/loc/o;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/loc/dw;->b(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    iget-object p2, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {p2}, Lcom/loc/o;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/loc/dw;->c(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    iget-object p2, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {p2}, Lcom/loc/o;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/loc/dw;->d(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    invoke-static {}, Lcom/loc/o;->n()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/loc/dw;->e(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    invoke-static {}, Lcom/loc/o;->f()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/loc/dw;->f(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    sget-object p2, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/loc/dw;->g(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    sget-object p2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/loc/dw;->h(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    sget-object p2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/loc/dw;->i(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-virtual {p1, p2}, Lcom/loc/dw;->a(I)Lcom/loc/dw;

    move-result-object p1

    sget-object p2, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/loc/dw;->j(Ljava/lang/String;)Lcom/loc/dw;

    move-result-object p1

    invoke-static {}, Lcom/loc/o;->h()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/loc/eg;->a(Ljava/lang/String;)J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lcom/loc/dw;->a(J)Lcom/loc/dw;

    move-result-object p1

    invoke-static {}, Lcom/loc/o;->h()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/loc/dw;->k(Ljava/lang/String;)Lcom/loc/dw;

    invoke-static {}, Lcom/loc/dw;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_6
    return-void

    :catchall_0
    move-exception p1

    const-string p2, "col"

    const-string p3, "init"

    invoke-static {p1, p2, p3}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    :goto_0
    return-void
.end method

.method public final b()V
    .locals 3

    const/4 v0, 0x1

    :try_start_0
    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object v0, p0, Lcom/loc/es;->g:Landroid/os/Handler;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/es;->g:Landroid/os/Handler;

    new-instance v1, Lcom/loc/es$1;

    invoke-direct {v1, p0}, Lcom/loc/es$1;-><init>(Lcom/loc/es;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    const-string v1, "cl"

    const-string v2, "upw"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final c()V
    .locals 3

    const/4 v0, 0x1

    :try_start_0
    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object v0, p0, Lcom/loc/es;->d:Lcom/loc/dw;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/es;->c:Lcom/loc/fb;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/es;->c:Lcom/loc/fb;

    invoke-virtual {v0}, Lcom/loc/fb;->a()Ljava/util/List;

    move-result-object v0

    invoke-static {v0}, Lcom/loc/dw;->a(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    const-string v1, "cl"

    const-string v2, "upc"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final d()V
    .locals 5

    :try_start_0
    iget-object v0, p0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/fz;->m(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/loc/es;->k:J

    sub-long/2addr v0, v2

    const-wide/32 v2, 0xea60

    cmp-long v4, v0, v2

    if-gez v4, :cond_1

    return-void

    :cond_1
    invoke-static {}, Lcom/loc/cr;->a()Lcom/loc/cr;

    move-result-object v0

    new-instance v1, Lcom/loc/es$b;

    const/4 v2, 0x2

    invoke-direct {v1, p0, v2}, Lcom/loc/es$b;-><init>(Lcom/loc/es;I)V

    invoke-virtual {v0, v1}, Lcom/loc/cr;->b(Lcom/loc/cs;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final e()V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/loc/cr;->a()Lcom/loc/cr;

    move-result-object v0

    new-instance v1, Lcom/loc/es$b;

    const/4 v2, 0x3

    invoke-direct {v1, p0, v2}, Lcom/loc/es$b;-><init>(Lcom/loc/es;I)V

    invoke-virtual {v0, v1}, Lcom/loc/cr;->b(Lcom/loc/cs;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
