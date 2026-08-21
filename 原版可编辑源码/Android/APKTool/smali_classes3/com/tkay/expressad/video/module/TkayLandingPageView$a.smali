.class final Lcom/tkay/expressad/video/module/TkayLandingPageView$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/atsignalcommon/base/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayLandingPageView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 61
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 61
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayLandingPageView$a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Z
    .locals 2

    .line 71
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_1

    .line 72
    invoke-static {p1}, Landroid/webkit/URLUtil;->isNetworkUrl(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return v1

    .line 75
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V

    const/4 p1, 0x1

    return p1

    :cond_1
    return v1
.end method
