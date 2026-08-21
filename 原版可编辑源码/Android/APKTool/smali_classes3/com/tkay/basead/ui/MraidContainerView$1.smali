.class final Lcom/tkay/basead/ui/MraidContainerView$1;
.super Lcom/tkay/basead/mraid/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MraidContainerView;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/MraidContainerView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MraidContainerView;)V
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidContainerView$1;->a:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-direct {p0}, Lcom/tkay/basead/mraid/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$1;->a:Lcom/tkay/basead/ui/MraidContainerView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidContainerView;->g:Lcom/tkay/basead/ui/MraidContainerView$a;

    if-eqz v0, :cond_0

    .line 110
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$1;->a:Lcom/tkay/basead/ui/MraidContainerView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidContainerView;->g:Lcom/tkay/basead/ui/MraidContainerView$a;

    invoke-interface {v0}, Lcom/tkay/basead/ui/MraidContainerView$a;->b()V

    :cond_0
    return-void
.end method

.method public final close()V
    .locals 0

    return-void
.end method

.method public final open(Ljava/lang/String;)V
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$1;->a:Lcom/tkay/basead/ui/MraidContainerView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidContainerView;->g:Lcom/tkay/basead/ui/MraidContainerView$a;

    if-eqz v0, :cond_0

    .line 97
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$1;->a:Lcom/tkay/basead/ui/MraidContainerView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidContainerView;->g:Lcom/tkay/basead/ui/MraidContainerView$a;

    invoke-interface {v0, p1}, Lcom/tkay/basead/ui/MraidContainerView$a;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
