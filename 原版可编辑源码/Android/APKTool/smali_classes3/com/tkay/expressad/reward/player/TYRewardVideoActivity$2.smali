.class final Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)V
    .locals 0

    .line 142
    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 7

    .line 161
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->e(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 162
    new-instance v0, Lcom/tkay/expressad/video/dynview/h/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/h/b;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->e(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/h/b;->d(Landroid/view/View;)V

    .line 164
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->f(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Z

    .line 165
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->g(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)V

    .line 166
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->h(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 167
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->h(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    move-result-object v1

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->i(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I

    move-result v2

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->j(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I

    move-result v3

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->k(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I

    move-result v4

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->l(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I

    move-result v5

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->m(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I

    move-result v6

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setNotchPadding(IIIII)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    if-eqz p1, :cond_1

    .line 147
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->e(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 148
    new-instance v0, Lcom/tkay/expressad/video/dynview/h/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/h/b;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->e(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/h/b;->d(Landroid/view/View;)V

    .line 150
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {v0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;

    .line 151
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-static {p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;Lcom/tkay/expressad/foundation/d/c;)V

    return-void

    .line 153
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;->a:Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    const-string v0, "campaign is null"

    invoke-static {p1, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;Ljava/lang/String;)V

    return-void
.end method
