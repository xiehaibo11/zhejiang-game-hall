.class final Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;
.super Ljava/lang/Object;
.source "MBCircularProgressButton.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/custom/baseview/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V
    .locals 0

    .line 317
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 320
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;Z)Z

    .line 321
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;

    sget-object v1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;)Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    .line 323
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)Lcom/mbridge/msdk/widget/custom/baseview/e;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/e;->b(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    return-void
.end method
