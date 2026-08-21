.class final Lcom/tkay/expressad/exoplayer/d/l$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaDrm$OnKeyStatusChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/d/l;->a(Lcom/tkay/expressad/exoplayer/d/j$g;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/d/j$g;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/d/l;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/d/l;Lcom/tkay/expressad/exoplayer/d/j$g;)V
    .locals 0

    .line 104
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d/l$2;->b:Lcom/tkay/expressad/exoplayer/d/l;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/d/l$2;->a:Lcom/tkay/expressad/exoplayer/d/j$g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onKeyStatusChange(Landroid/media/MediaDrm;[BLjava/util/List;Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/media/MediaDrm;",
            "[B",
            "Ljava/util/List<",
            "Landroid/media/MediaDrm$KeyStatus;",
            ">;Z)V"
        }
    .end annotation

    .line 108
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 109
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Landroid/media/MediaDrm$KeyStatus;

    .line 110
    new-instance p4, Lcom/tkay/expressad/exoplayer/d/j$b;

    invoke-virtual {p3}, Landroid/media/MediaDrm$KeyStatus;->getStatusCode()I

    move-result v0

    invoke-virtual {p3}, Landroid/media/MediaDrm$KeyStatus;->getKeyId()[B

    move-result-object p3

    invoke-direct {p4, v0, p3}, Lcom/tkay/expressad/exoplayer/d/j$b;-><init>(I[B)V

    invoke-interface {p1, p4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    return-void
.end method
