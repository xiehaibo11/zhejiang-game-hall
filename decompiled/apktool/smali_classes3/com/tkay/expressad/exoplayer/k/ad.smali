.class public final Lcom/tkay/expressad/exoplayer/k/ad;
.super Ljava/lang/Object;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()V
    .locals 2

    .line 48
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x12

    if-lt v0, v1, :cond_0

    .line 1060
    invoke-static {}, Landroid/os/Trace;->endSection()V

    :cond_0
    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 2

    .line 37
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x12

    if-lt v0, v1, :cond_0

    .line 1055
    invoke-static {p0}, Landroid/os/Trace;->beginSection(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private static b()V
    .locals 0

    .line 60
    invoke-static {}, Landroid/os/Trace;->endSection()V

    return-void
.end method

.method private static b(Ljava/lang/String;)V
    .locals 0

    .line 55
    invoke-static {p0}, Landroid/os/Trace;->beginSection(Ljava/lang/String;)V

    return-void
.end method
