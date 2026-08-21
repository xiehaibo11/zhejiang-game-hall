.class final Lcom/tkay/basead/ui/BaseShakeView$1;
.super Lcom/tkay/basead/c/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/ui/BaseShakeView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic h:Lcom/tkay/basead/ui/BaseShakeView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseShakeView;)V
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView$1;->h:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-direct {p0}, Lcom/tkay/basead/c/h;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Z
    .locals 2

    .line 28
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView$1;->h:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseShakeView;->isShown()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 32
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView$1;->h:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseShakeView;->a(Lcom/tkay/basead/ui/BaseShakeView;)Lcom/tkay/basead/ui/BaseShakeView$a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 33
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView$1;->h:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseShakeView;->a(Lcom/tkay/basead/ui/BaseShakeView;)Lcom/tkay/basead/ui/BaseShakeView$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/ui/BaseShakeView$a;->a()Z

    move-result v0

    return v0

    :cond_1
    return v1
.end method
