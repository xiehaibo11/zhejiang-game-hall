.class public final Lcom/tkay/basead/d/c/b;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/h;)V
    .locals 2

    .line 15
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->f()Ljava/lang/String;

    move-result-object v0

    .line 16
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 17
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/j;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/h;->d(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
