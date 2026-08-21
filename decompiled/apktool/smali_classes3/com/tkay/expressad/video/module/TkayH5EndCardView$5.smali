.class final Lcom/tkay/expressad/video/module/TkayH5EndCardView$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayH5EndCardView;->i()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 0

    .line 708
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$5;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 711
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$5;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->j(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    return-void
.end method
