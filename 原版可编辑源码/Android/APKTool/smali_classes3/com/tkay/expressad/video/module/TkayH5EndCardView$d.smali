.class final Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayH5EndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "d"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

.field private b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 0

    .line 582
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 583
    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 588
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_0

    .line 589
    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z

    :cond_0
    return-void
.end method
