.class final Lcom/tkay/basead/ui/MraidContainerView$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/ClickToReLoadView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MraidContainerView;->c()V
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

    .line 253
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidContainerView$3;->a:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 257
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView$3;->a:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->loadMraidWebView()V

    return-void
.end method
