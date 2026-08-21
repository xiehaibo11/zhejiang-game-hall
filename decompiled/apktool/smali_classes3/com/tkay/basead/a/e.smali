.class public final Lcom/tkay/basead/a/e;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)I
    .locals 2

    .line 20
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->D()I

    move-result p1

    const/4 v0, 0x1

    const-string v1, "string"

    if-eq p1, v0, :cond_0

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    const-string p1, "myoffer_cta_learn_more"

    .line 28
    invoke-static {p0, p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0

    :cond_0
    const-string p1, "myoffer_cta_install_now"

    .line 23
    invoke-static {p0, p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static a(Lcom/tkay/core/common/f/h;)Z
    .locals 1

    .line 34
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 35
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 36
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    const/4 p0, 0x1

    return p0
.end method
