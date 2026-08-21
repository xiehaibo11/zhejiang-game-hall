.class public final Lcom/mbridge/msdk/widget/custom/b;
.super Ljava/lang/Object;
.source "MBridgeCustomRender.java"


# instance fields
.field private a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

.field private b:Landroid/content/Context;

.field private final c:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

.field private final d:Lcom/mbridge/msdk/widget/custom/a;

.field private e:Lcom/mbridge/msdk/widget/custom/a/d;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Landroid/content/Context;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a;)V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    .line 20
    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/b;->b:Landroid/content/Context;

    .line 21
    iput-object p3, p0, Lcom/mbridge/msdk/widget/custom/b;->c:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    .line 22
    iput-object p4, p0, Lcom/mbridge/msdk/widget/custom/b;->d:Lcom/mbridge/msdk/widget/custom/a;

    return-void
.end method


# virtual methods
.method public final a(II)Landroid/view/View;
    .locals 8
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 27
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/b/c;->a(Landroid/content/Context;)Lcom/mbridge/msdk/widget/custom/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b;->c:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getLayoutFilePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/b/c;->a(Ljava/lang/String;)Landroid/view/View;

    move-result-object v0

    .line 28
    new-instance v7, Lcom/mbridge/msdk/widget/custom/a/d;

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/b;->c:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    iget-object v3, p0, Lcom/mbridge/msdk/widget/custom/b;->d:Lcom/mbridge/msdk/widget/custom/a;

    iget-object v4, p0, Lcom/mbridge/msdk/widget/custom/b;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    move-object v1, v7

    move v5, p1

    move v6, p2

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/widget/custom/a/d;-><init>(Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a;Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;II)V

    iput-object v7, p0, Lcom/mbridge/msdk/widget/custom/b;->e:Lcom/mbridge/msdk/widget/custom/a/d;

    .line 29
    move-object p1, v0

    check-cast p1, Landroid/view/ViewGroup;

    invoke-virtual {v7, p1}, Lcom/mbridge/msdk/widget/custom/a/d;->a(Landroid/view/ViewGroup;)V

    return-object v0
.end method

.method public final a()Lcom/mbridge/msdk/widget/custom/baseview/MBButton;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b;->e:Lcom/mbridge/msdk/widget/custom/a/d;

    if-eqz v0, :cond_0

    .line 36
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/d;->a()Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method
