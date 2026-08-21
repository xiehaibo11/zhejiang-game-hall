.class final Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;->a:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;->a:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->a(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 1

    if-eqz p1, :cond_0

    .line 62
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;->a:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 63
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;->a:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-static {v0, p1, p2}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->a(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;Lcom/tkay/expressad/foundation/d/c;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 66
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-void
.end method
