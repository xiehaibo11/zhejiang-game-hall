.class final Lcom/tkay/expressad/exoplayer/d/l$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaDrm$OnEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/d/l;->a(Lcom/tkay/expressad/exoplayer/d/j$f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/d/j$f;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/d/l;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/d/l;Lcom/tkay/expressad/exoplayer/d/j$f;)V
    .locals 0

    .line 87
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d/l$1;->b:Lcom/tkay/expressad/exoplayer/d/l;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/d/l$1;->a:Lcom/tkay/expressad/exoplayer/d/j$f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onEvent(Landroid/media/MediaDrm;[BII[B)V
    .locals 0

    .line 91
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/d/l$1;->a:Lcom/tkay/expressad/exoplayer/d/j$f;

    invoke-interface {p1, p2, p3}, Lcom/tkay/expressad/exoplayer/d/j$f;->a([BI)V

    return-void
.end method
