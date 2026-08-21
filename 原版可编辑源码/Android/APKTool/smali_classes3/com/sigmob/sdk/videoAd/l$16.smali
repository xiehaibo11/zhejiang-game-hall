.class Lcom/sigmob/sdk/videoAd/l$16;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaPlayer$OnCompletionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;I)Lcom/sigmob/sdk/videoAd/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$16;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCompletion(Landroid/media/MediaPlayer;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$16;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->t(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$16;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->u(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$16;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->x(Lcom/sigmob/sdk/videoAd/l;)F

    move-result p1

    const/high16 v0, 0x3f000000    # 0.5f

    cmpg-float p1, p1, v0

    if-gez p1, :cond_1

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$16;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->v(Lcom/sigmob/sdk/videoAd/l;)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$16;->a:Lcom/sigmob/sdk/videoAd/l;

    const-string v0, "none"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;)Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$16;->a:Lcom/sigmob/sdk/videoAd/l;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoAd/l;->b(Z)V

    return-void
.end method
