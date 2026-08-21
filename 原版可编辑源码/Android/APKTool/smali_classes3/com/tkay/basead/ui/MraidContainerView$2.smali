.class final Lcom/tkay/basead/ui/MraidContainerView$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MraidContainerView;->loadMraidWebView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/basead/ui/MraidContainerView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MraidContainerView;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 163
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    iput-object p2, p0, Lcom/tkay/basead/ui/MraidContainerView$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/basead/ui/MraidContainerView$2;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 166
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    new-instance v1, Lcom/tkay/basead/mraid/MraidWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/basead/mraid/MraidWebView;-><init>(Landroid/content/Context;)V

    iput-object v1, v0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    .line 167
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$2;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/basead/ui/MraidContainerView$2;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/basead/ui/MraidContainerView$2;->c:Lcom/tkay/basead/ui/MraidContainerView;

    iget-object v2, v2, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    new-instance v3, Lcom/tkay/basead/ui/MraidContainerView$2$1;

    invoke-direct {v3, p0}, Lcom/tkay/basead/ui/MraidContainerView$2$1;-><init>(Lcom/tkay/basead/ui/MraidContainerView$2;)V

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/basead/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/basead/mraid/MraidWebView;Lcom/tkay/basead/mraid/d$a;)V

    return-void
.end method
