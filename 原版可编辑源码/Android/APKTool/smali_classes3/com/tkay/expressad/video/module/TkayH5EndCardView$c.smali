.class final Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayH5EndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "c"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

.field private b:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;I)V
    .locals 0

    .line 1003
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1004
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    .line 1005
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;->b:I

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 1010
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_2

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_2

    .line 1012
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->m(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 1016
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->n(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z

    .line 1018
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    const-string v1, ".zip"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception v0

    .line 1058
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_2
    return-void
.end method
