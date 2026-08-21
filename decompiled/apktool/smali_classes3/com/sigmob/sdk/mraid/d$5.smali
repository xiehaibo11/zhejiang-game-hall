.class Lcom/sigmob/sdk/mraid/d$5;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/webkit/ValueCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/d;->e()Ljava/lang/Integer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Landroid/webkit/ValueCallback<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/d;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d$5;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 4

    :try_start_0
    const-string v0, "null"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "undefined"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Ljava/lang/Float;->valueOf(Ljava/lang/String;)Ljava/lang/Float;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result v0

    float-to-double v0, v0

    const-wide v2, 0x3ee4f8b588e368f1L    # 1.0E-5

    cmpl-double v0, v0, v2

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$5;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    const/high16 v1, 0x447a0000    # 1000.0f

    mul-float/2addr p1, v1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d;Ljava/lang/Integer;)Ljava/lang/Integer;

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d$5;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/d;->h(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$f;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d$5;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/d;->h(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$f;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$5;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->i(Lcom/sigmob/sdk/mraid/d;)Ljava/lang/Integer;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/sigmob/sdk/mraid/d$f;->a(Ljava/lang/Integer;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public synthetic onReceiveValue(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/d$5;->a(Ljava/lang/String;)V

    return-void
.end method
