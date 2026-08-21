.class final Lcom/tkay/basead/ui/BaseScreenATView$6;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseScreenATView;->z()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseScreenATView;)V
    .locals 0

    .line 1106
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 1110
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    if-nez p1, :cond_0

    goto :goto_0

    .line 1114
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/PlayerView;->isMute()Z

    move-result p1

    const/4 v0, 0x1

    xor-int/2addr p1, v0

    if-eqz p1, :cond_1

    .line 1117
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iput-boolean v0, p1, Lcom/tkay/basead/ui/BaseScreenATView;->M:Z

    .line 1118
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/MuteImageView;->setMute(Z)V

    .line 1119
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/PlayerView;->setMute(Z)V

    return-void

    .line 1121
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    const/4 v0, 0x0

    iput-boolean v0, p1, Lcom/tkay/basead/ui/BaseScreenATView;->M:Z

    .line 1122
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/MuteImageView;->setMute(Z)V

    .line 1123
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$6;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/PlayerView;->setMute(Z)V

    :cond_2
    :goto_0
    return-void
.end method
