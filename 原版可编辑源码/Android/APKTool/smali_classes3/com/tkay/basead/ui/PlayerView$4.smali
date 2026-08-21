.class final Lcom/tkay/basead/ui/PlayerView$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/l/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/PlayerView;->b(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/PlayerView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/PlayerView;)V
    .locals 0

    .line 586
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView$4;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(II)V
    .locals 2

    .line 590
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView$4;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PlayerView;->z(Lcom/tkay/basead/ui/PlayerView;)Landroid/view/TextureView;

    move-result-object v1

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/basead/ui/PlayerView;->autoFitVideoSize(IILandroid/view/View;)V

    return-void
.end method
