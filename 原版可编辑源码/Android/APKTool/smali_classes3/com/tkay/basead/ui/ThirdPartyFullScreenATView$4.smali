.class final Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V
    .locals 0

    .line 257
    iput-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 261
    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ae:Landroid/view/View;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)Lcom/tkay/core/api/BaseAd;

    move-result-object p1

    if-nez p1, :cond_0

    goto :goto_0

    .line 265
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-boolean v0, p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->M:Z

    xor-int/lit8 v0, v0, 0x1

    iput-boolean v0, p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->M:Z

    .line 267
    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-boolean v0, v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->M:Z

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/MuteImageView;->setMute(Z)V

    .line 268
    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)Lcom/tkay/core/api/BaseAd;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-boolean v0, v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->M:Z

    invoke-virtual {p1, v0}, Lcom/tkay/core/api/BaseAd;->setVideoMute(Z)V

    :cond_1
    :goto_0
    return-void
.end method
