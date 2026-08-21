.class final Lcom/tkay/basead/ui/MraidContainerView$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/mraid/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MraidContainerView$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/MraidContainerView$2;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MraidContainerView$2;)V
    .locals 0

    .line 167
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidContainerView$2$1;->a:Lcom/tkay/basead/ui/MraidContainerView$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 170
    invoke-static {}, Lcom/tkay/basead/ui/MraidContainerView;->a()Ljava/lang/String;

    .line 172
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$2$1;->a:Lcom/tkay/basead/ui/MraidContainerView$2;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidContainerView;->a(Lcom/tkay/basead/ui/MraidContainerView;)Z

    .line 174
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$2$1;->a:Lcom/tkay/basead/ui/MraidContainerView$2;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidContainerView;->b(Lcom/tkay/basead/ui/MraidContainerView;)V

    .line 176
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$2$1;->a:Lcom/tkay/basead/ui/MraidContainerView$2;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidContainerView;->c(Lcom/tkay/basead/ui/MraidContainerView;)V

    return-void
.end method

.method public final a(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 181
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$2$1;->a:Lcom/tkay/basead/ui/MraidContainerView$2;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidContainerView;->a(Lcom/tkay/basead/ui/MraidContainerView;)Z

    .line 182
    invoke-static {}, Lcom/tkay/basead/ui/MraidContainerView;->a()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onFailed: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->c()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 184
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidContainerView$2$1;->a:Lcom/tkay/basead/ui/MraidContainerView$2;

    iget-object p1, p1, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MraidContainerView;->d(Lcom/tkay/basead/ui/MraidContainerView;)V

    .line 186
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidContainerView$2$1;->a:Lcom/tkay/basead/ui/MraidContainerView$2;

    iget-object p1, p1, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MraidContainerView;->c(Lcom/tkay/basead/ui/MraidContainerView;)V

    return-void
.end method
