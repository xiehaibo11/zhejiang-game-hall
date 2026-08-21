.class final Lcom/tencent/bugly/proguard/as$g;
.super Lcom/tencent/bugly/proguard/as$a;
.source "BUGLY"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tencent/bugly/proguard/as;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "g"
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 2

    const/4 v0, 0x6

    const/4 v1, 0x0

    .line 2077
    invoke-direct {p0, v0, v1}, Lcom/tencent/bugly/proguard/as$a;-><init>(IB)V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 2074
    invoke-direct {p0}, Lcom/tencent/bugly/proguard/as$g;-><init>()V

    return-void
.end method


# virtual methods
.method final a()Z
    .locals 2

    .line 2082
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    .line 2521
    iget v0, v0, Lcom/tencent/bugly/proguard/at;->B:I

    const/4 v1, 0x1

    and-int/2addr v0, v1

    if-lez v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
