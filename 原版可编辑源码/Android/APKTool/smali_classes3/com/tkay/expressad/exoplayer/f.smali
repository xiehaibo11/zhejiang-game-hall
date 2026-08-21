.class public final Lcom/tkay/expressad/exoplayer/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/ab;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/f$a;
    }
.end annotation


# static fields
.field public static final a:J = 0x1388L

.field public static final b:I = 0x0

.field public static final c:I = 0x1

.field public static final d:I = 0x2

.field protected static final e:I = 0x32

.field private static final f:Ljava/lang/String; = "DefaultRenderersFactory"


# instance fields
.field private final g:Landroid/content/Context;

.field private final h:Lcom/tkay/expressad/exoplayer/d/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;"
        }
    .end annotation
.end field

.field private final i:I

.field private final j:J


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 94
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;I)V
    .locals 6

    const/4 v2, 0x0

    const-wide/16 v4, 0x1388

    move-object v0, p0

    move-object v1, p1

    move v3, p2

    .line 115
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;IJ)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;IJ)V
    .locals 6

    const/4 v2, 0x0

    move-object v0, p0

    move-object v1, p1

    move v3, p2

    move-wide v4, p3

    .line 142
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;IJ)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    .line 104
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;B)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;B)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;B)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v3, 0x0

    const-wide/16 v4, 0x1388

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    .line 127
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;IJ)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;IJ)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;IJ)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 154
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 155
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f;->g:Landroid/content/Context;

    .line 156
    iput p3, p0, Lcom/tkay/expressad/exoplayer/f;->i:I

    .line 157
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/f;->j:J

    .line 158
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/f;->h:Lcom/tkay/expressad/exoplayer/d/g;

    return-void
.end method

.method private static a()V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;JLandroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;ILjava/util/ArrayList;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;J",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/l/h;",
            "I",
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/y;",
            ">;)V"
        }
    .end annotation

    move/from16 v0, p6

    move-object/from16 v1, p7

    .line 202
    new-instance v11, Lcom/tkay/expressad/exoplayer/l/e;

    sget-object v4, Lcom/tkay/expressad/exoplayer/f/c;->a:Lcom/tkay/expressad/exoplayer/f/c;

    const/16 v10, 0x32

    move-object v2, v11

    move-object v3, p0

    move-wide v5, p2

    move-object v7, p1

    move-object/from16 v8, p4

    move-object/from16 v9, p5

    invoke-direct/range {v2 .. v10}, Lcom/tkay/expressad/exoplayer/l/e;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;JLcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;I)V

    invoke-virtual {v1, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    if-nez v0, :cond_0

    return-void

    .line 216
    :cond_0
    invoke-virtual/range {p7 .. p7}, Ljava/util/ArrayList;->size()I

    move-result v2

    const/4 v3, 0x2

    if-ne v0, v3, :cond_1

    add-int/lit8 v2, v2, -0x1

    :cond_1
    :try_start_0
    const-string v0, "com.tkay.expressad.exoplayer.ext.vp9.LibvpxVideoRenderer"

    .line 224
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const/4 v4, 0x5

    new-array v5, v4, [Ljava/lang/Class;

    .line 225
    sget-object v6, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    const/4 v7, 0x0

    aput-object v6, v5, v7

    sget-object v6, Ljava/lang/Long;->TYPE:Ljava/lang/Class;

    const/4 v8, 0x1

    aput-object v6, v5, v8

    const-class v6, Landroid/os/Handler;

    aput-object v6, v5, v3

    const-class v6, Lcom/tkay/expressad/exoplayer/l/h;

    const/4 v9, 0x3

    aput-object v6, v5, v9

    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v10, 0x4

    aput-object v6, v5, v10

    .line 226
    invoke-virtual {v0, v5}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    new-array v4, v4, [Ljava/lang/Object;

    .line 233
    sget-object v5, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    aput-object v5, v4, v7

    .line 237
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    aput-object v5, v4, v8

    aput-object p4, v4, v3

    aput-object p5, v4, v9

    const/16 v3, 0x32

    .line 240
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v4, v10

    .line 235
    invoke-virtual {v0, v4}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/y;

    .line 241
    invoke-virtual {v1, v2, v0}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    const-string v0, "DefaultRenderersFactory"

    const-string v1, "Loaded LibvpxVideoRenderer."

    .line 242
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 247
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Error instantiating VP9 extension"

    invoke-direct {v1, v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :catch_1
    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/d/g;[Lcom/tkay/expressad/exoplayer/b/f;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;ILjava/util/ArrayList;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;[",
            "Lcom/tkay/expressad/exoplayer/b/f;",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/b/g;",
            "I",
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/y;",
            ">;)V"
        }
    .end annotation

    move/from16 v0, p5

    move-object/from16 v9, p6

    const-string v10, "DefaultRenderersFactory"

    .line 269
    new-instance v11, Lcom/tkay/expressad/exoplayer/b/o;

    sget-object v3, Lcom/tkay/expressad/exoplayer/f/c;->a:Lcom/tkay/expressad/exoplayer/f/c;

    .line 277
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/b/c;->a(Landroid/content/Context;)Lcom/tkay/expressad/exoplayer/b/c;

    move-result-object v7

    move-object v1, v11

    move-object v2, p0

    move-object v4, p1

    move-object v5, p3

    move-object/from16 v6, p4

    move-object v8, p2

    invoke-direct/range {v1 .. v8}, Lcom/tkay/expressad/exoplayer/b/o;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;)V

    .line 269
    invoke-virtual {v9, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    if-nez v0, :cond_0

    return-void

    .line 283
    :cond_0
    invoke-virtual/range {p6 .. p6}, Ljava/util/ArrayList;->size()I

    move-result v1

    const/4 v2, 0x2

    if-ne v0, v2, :cond_1

    add-int/lit8 v1, v1, -0x1

    :cond_1
    const/4 v0, 0x0

    const/4 v3, 0x3

    const/4 v4, 0x1

    :try_start_0
    const-string v5, "com.tkay.expressad.exoplayer.ext.opus.LibopusAudioRenderer"

    .line 291
    invoke-static {v5}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v5

    new-array v6, v3, [Ljava/lang/Class;

    .line 292
    const-class v7, Landroid/os/Handler;

    aput-object v7, v6, v0

    const-class v7, Lcom/tkay/expressad/exoplayer/b/g;

    aput-object v7, v6, v4

    const-class v7, [Lcom/tkay/expressad/exoplayer/b/f;

    aput-object v7, v6, v2

    .line 293
    invoke-virtual {v5, v6}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v5

    new-array v6, v3, [Ljava/lang/Object;

    aput-object p3, v6, v0

    aput-object p4, v6, v4

    aput-object p2, v6, v2

    .line 299
    invoke-virtual {v5, v6}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/exoplayer/y;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    add-int/lit8 v6, v1, 0x1

    .line 300
    :try_start_1
    invoke-virtual {v9, v1, v5}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    const-string v1, "Loaded LibopusAudioRenderer."

    .line 301
    invoke-static {v10, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_0
    move v1, v6

    goto :goto_0

    :catch_1
    move-exception v0

    .line 306
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Error instantiating Opus extension"

    invoke-direct {v1, v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :catch_2
    :goto_0
    move v6, v1

    :goto_1
    :try_start_2
    const-string v1, "com.tkay.expressad.exoplayer.ext.flac.LibflacAudioRenderer"

    .line 312
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    new-array v5, v3, [Ljava/lang/Class;

    .line 313
    const-class v7, Landroid/os/Handler;

    aput-object v7, v5, v0

    const-class v7, Lcom/tkay/expressad/exoplayer/b/g;

    aput-object v7, v5, v4

    const-class v7, [Lcom/tkay/expressad/exoplayer/b/f;

    aput-object v7, v5, v2

    .line 314
    invoke-virtual {v1, v5}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v1

    new-array v5, v3, [Ljava/lang/Object;

    aput-object p3, v5, v0

    aput-object p4, v5, v4

    aput-object p2, v5, v2

    .line 320
    invoke-virtual {v1, v5}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/y;
    :try_end_2
    .catch Ljava/lang/ClassNotFoundException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_4

    add-int/lit8 v5, v6, 0x1

    .line 321
    :try_start_3
    invoke-virtual {v9, v6, v1}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    const-string v1, "Loaded LibflacAudioRenderer."

    .line 322
    invoke-static {v10, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_3
    .catch Ljava/lang/ClassNotFoundException; {:try_start_3 .. :try_end_3} :catch_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_4

    goto :goto_3

    :catch_3
    move v6, v5

    goto :goto_2

    :catch_4
    move-exception v0

    .line 327
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Error instantiating FLAC extension"

    invoke-direct {v1, v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :catch_5
    :goto_2
    move v5, v6

    :goto_3
    :try_start_4
    const-string v1, "com.tkay.expressad.exoplayer.ext.ffmpeg.FfmpegAudioRenderer"

    .line 334
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    new-array v6, v3, [Ljava/lang/Class;

    .line 335
    const-class v7, Landroid/os/Handler;

    aput-object v7, v6, v0

    const-class v7, Lcom/tkay/expressad/exoplayer/b/g;

    aput-object v7, v6, v4

    const-class v7, [Lcom/tkay/expressad/exoplayer/b/f;

    aput-object v7, v6, v2

    .line 336
    invoke-virtual {v1, v6}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v1

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p3, v3, v0

    aput-object p4, v3, v4

    aput-object p2, v3, v2

    .line 342
    invoke-virtual {v1, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/y;

    .line 343
    invoke-virtual {v9, v5, v0}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    const-string v0, "Loaded FfmpegAudioRenderer."

    .line 344
    invoke-static {v10, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_4
    .catch Ljava/lang/ClassNotFoundException; {:try_start_4 .. :try_end_4} :catch_7
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_6

    return-void

    :catch_6
    move-exception v0

    .line 349
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Error instantiating FFmpeg extension"

    invoke-direct {v1, v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :catch_7
    return-void
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/g/f;Landroid/os/Looper;Ljava/util/ArrayList;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/g/f;",
            "Landroid/os/Looper;",
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/y;",
            ">;)V"
        }
    .end annotation

    .line 381
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/g;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/exoplayer/g/g;-><init>(Lcom/tkay/expressad/exoplayer/g/f;Landroid/os/Looper;)V

    invoke-virtual {p2, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private static b()[Lcom/tkay/expressad/exoplayer/b/f;
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/b/f;

    return-object v0
.end method


# virtual methods
.method public final a(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/g/f;Lcom/tkay/expressad/exoplayer/d/g;)[Lcom/tkay/expressad/exoplayer/y;
    .locals 18
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/l/h;",
            "Lcom/tkay/expressad/exoplayer/b/g;",
            "Lcom/tkay/expressad/exoplayer/g/f;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;)[",
            "Lcom/tkay/expressad/exoplayer/y;"
        }
    .end annotation

    move-object/from16 v1, p0

    if-nez p5, :cond_0

    .line 169
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/f;->h:Lcom/tkay/expressad/exoplayer/d/g;

    goto :goto_0

    :cond_0
    move-object/from16 v0, p5

    .line 171
    :goto_0
    new-instance v11, Ljava/util/ArrayList;

    invoke-direct {v11}, Ljava/util/ArrayList;-><init>()V

    .line 172
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/f;->g:Landroid/content/Context;

    iget-wide v12, v1, Lcom/tkay/expressad/exoplayer/f;->j:J

    iget v14, v1, Lcom/tkay/expressad/exoplayer/f;->i:I

    .line 1202
    new-instance v15, Lcom/tkay/expressad/exoplayer/l/e;

    sget-object v4, Lcom/tkay/expressad/exoplayer/f/c;->a:Lcom/tkay/expressad/exoplayer/f/c;

    const/16 v10, 0x32

    move-object v2, v15

    move-wide v5, v12

    move-object v7, v0

    move-object/from16 v8, p1

    move-object/from16 v9, p2

    invoke-direct/range {v2 .. v10}, Lcom/tkay/expressad/exoplayer/l/e;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;JLcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;I)V

    invoke-virtual {v11, v15}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string v10, "DefaultRenderersFactory"

    const/4 v15, 0x3

    const/4 v9, 0x0

    const/16 v16, 0x1

    const/4 v8, 0x2

    if-eqz v14, :cond_2

    .line 1216
    invoke-virtual {v11}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ne v14, v8, :cond_1

    add-int/lit8 v2, v2, -0x1

    :cond_1
    :try_start_0
    const-string v3, "com.tkay.expressad.exoplayer.ext.vp9.LibvpxVideoRenderer"

    .line 1224
    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const/4 v4, 0x5

    new-array v5, v4, [Ljava/lang/Class;

    .line 1225
    sget-object v6, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v9

    sget-object v6, Ljava/lang/Long;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v16

    const-class v6, Landroid/os/Handler;

    aput-object v6, v5, v8

    const-class v6, Lcom/tkay/expressad/exoplayer/l/h;

    aput-object v6, v5, v15

    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 1226
    invoke-virtual {v3, v5}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v3

    new-array v4, v4, [Ljava/lang/Object;

    .line 1233
    sget-object v5, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    aput-object v5, v4, v9

    .line 1237
    invoke-static {v12, v13}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    aput-object v5, v4, v16

    aput-object p1, v4, v8

    aput-object p2, v4, v15

    const/16 v5, 0x32

    .line 1240
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v4, v7

    .line 1235
    invoke-virtual {v3, v4}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/y;

    .line 1241
    invoke-virtual {v11, v2, v3}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    const-string v2, "Loaded LibvpxVideoRenderer."

    .line 1242
    invoke-static {v10, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 1247
    new-instance v2, Ljava/lang/RuntimeException;

    const-string v3, "Error instantiating VP9 extension"

    invoke-direct {v2, v3, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v2

    .line 174
    :catch_1
    :cond_2
    :goto_1
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/f;->g:Landroid/content/Context;

    new-array v12, v9, [Lcom/tkay/expressad/exoplayer/b/f;

    iget v13, v1, Lcom/tkay/expressad/exoplayer/f;->i:I

    .line 2269
    new-instance v14, Lcom/tkay/expressad/exoplayer/b/o;

    sget-object v4, Lcom/tkay/expressad/exoplayer/f/c;->a:Lcom/tkay/expressad/exoplayer/f/c;

    .line 2277
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/b/c;->a(Landroid/content/Context;)Lcom/tkay/expressad/exoplayer/b/c;

    move-result-object v17

    move-object v2, v14

    move-object v5, v0

    move-object/from16 v6, p1

    move-object/from16 v7, p3

    move v0, v8

    move-object/from16 v8, v17

    move/from16 v17, v9

    move-object v9, v12

    invoke-direct/range {v2 .. v9}, Lcom/tkay/expressad/exoplayer/b/o;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;)V

    .line 2269
    invoke-virtual {v11, v14}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    if-eqz v13, :cond_4

    .line 2283
    invoke-virtual {v11}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ne v13, v0, :cond_3

    add-int/lit8 v2, v2, -0x1

    :cond_3
    :try_start_1
    const-string v3, "com.tkay.expressad.exoplayer.ext.opus.LibopusAudioRenderer"

    .line 2291
    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    new-array v4, v15, [Ljava/lang/Class;

    .line 2292
    const-class v5, Landroid/os/Handler;

    aput-object v5, v4, v17

    const-class v5, Lcom/tkay/expressad/exoplayer/b/g;

    aput-object v5, v4, v16

    const-class v5, [Lcom/tkay/expressad/exoplayer/b/f;

    aput-object v5, v4, v0

    .line 2293
    invoke-virtual {v3, v4}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v3

    new-array v4, v15, [Ljava/lang/Object;

    aput-object p1, v4, v17

    aput-object p3, v4, v16

    aput-object v12, v4, v0

    .line 2299
    invoke-virtual {v3, v4}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/y;
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3

    add-int/lit8 v4, v2, 0x1

    .line 2300
    :try_start_2
    invoke-virtual {v11, v2, v3}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    const-string v2, "Loaded LibopusAudioRenderer."

    .line 2301
    invoke-static {v10, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_2
    .catch Ljava/lang/ClassNotFoundException; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    goto :goto_3

    :catch_2
    move v2, v4

    goto :goto_2

    :catch_3
    move-exception v0

    .line 2306
    new-instance v2, Ljava/lang/RuntimeException;

    const-string v3, "Error instantiating Opus extension"

    invoke-direct {v2, v3, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v2

    :catch_4
    :goto_2
    move v4, v2

    :goto_3
    :try_start_3
    const-string v2, "com.tkay.expressad.exoplayer.ext.flac.LibflacAudioRenderer"

    .line 2312
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    new-array v3, v15, [Ljava/lang/Class;

    .line 2313
    const-class v5, Landroid/os/Handler;

    aput-object v5, v3, v17

    const-class v5, Lcom/tkay/expressad/exoplayer/b/g;

    aput-object v5, v3, v16

    const-class v5, [Lcom/tkay/expressad/exoplayer/b/f;

    aput-object v5, v3, v0

    .line 2314
    invoke-virtual {v2, v3}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v2

    new-array v3, v15, [Ljava/lang/Object;

    aput-object p1, v3, v17

    aput-object p3, v3, v16

    aput-object v12, v3, v0

    .line 2320
    invoke-virtual {v2, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/y;
    :try_end_3
    .catch Ljava/lang/ClassNotFoundException; {:try_start_3 .. :try_end_3} :catch_7
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_6

    add-int/lit8 v3, v4, 0x1

    .line 2321
    :try_start_4
    invoke-virtual {v11, v4, v2}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    const-string v2, "Loaded LibflacAudioRenderer."

    .line 2322
    invoke-static {v10, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_4
    .catch Ljava/lang/ClassNotFoundException; {:try_start_4 .. :try_end_4} :catch_5
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_6

    goto :goto_5

    :catch_5
    move v4, v3

    goto :goto_4

    :catch_6
    move-exception v0

    .line 2327
    new-instance v2, Ljava/lang/RuntimeException;

    const-string v3, "Error instantiating FLAC extension"

    invoke-direct {v2, v3, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v2

    :catch_7
    :goto_4
    move v3, v4

    :goto_5
    :try_start_5
    const-string v2, "com.tkay.expressad.exoplayer.ext.ffmpeg.FfmpegAudioRenderer"

    .line 2334
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    new-array v4, v15, [Ljava/lang/Class;

    .line 2335
    const-class v5, Landroid/os/Handler;

    aput-object v5, v4, v17

    const-class v5, Lcom/tkay/expressad/exoplayer/b/g;

    aput-object v5, v4, v16

    const-class v5, [Lcom/tkay/expressad/exoplayer/b/f;

    aput-object v5, v4, v0

    .line 2336
    invoke-virtual {v2, v4}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v2

    new-array v4, v15, [Ljava/lang/Object;

    aput-object p1, v4, v17

    aput-object p3, v4, v16

    aput-object v12, v4, v0

    .line 2342
    invoke-virtual {v2, v4}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/y;

    .line 2343
    invoke-virtual {v11, v3, v0}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    const-string v0, "Loaded FfmpegAudioRenderer."

    .line 2344
    invoke-static {v10, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_5
    .catch Ljava/lang/ClassNotFoundException; {:try_start_5 .. :try_end_5} :catch_9
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_8

    goto :goto_6

    :catch_8
    move-exception v0

    .line 2349
    new-instance v2, Ljava/lang/RuntimeException;

    const-string v3, "Error instantiating FFmpeg extension"

    invoke-direct {v2, v3, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v2

    .line 178
    :catch_9
    :cond_4
    :goto_6
    invoke-virtual/range {p1 .. p1}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v0

    .line 2381
    new-instance v2, Lcom/tkay/expressad/exoplayer/g/g;

    move-object/from16 v3, p4

    invoke-direct {v2, v3, v0}, Lcom/tkay/expressad/exoplayer/g/g;-><init>(Lcom/tkay/expressad/exoplayer/g/f;Landroid/os/Looper;)V

    invoke-virtual {v11, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 181
    invoke-virtual {v11}, Ljava/util/ArrayList;->size()I

    move-result v0

    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/y;

    invoke-virtual {v11, v0}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/expressad/exoplayer/y;

    return-object v0
.end method
