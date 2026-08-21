.class final Lcom/mbridge/msdk/nativex/view/MBMediaView$15;
.super Ljava/lang/Object;
.source "MBMediaView.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/click/b;

.field final synthetic b:Lcom/mbridge/msdk/nativex/view/MBMediaView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/click/b;)V
    .locals 0

    .line 994
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$15;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$15;->a:Lcom/mbridge/msdk/click/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 997
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$15;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$15;->a:Lcom/mbridge/msdk/click/b;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/click/b;)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    .line 1006
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$15;->a()V

    return-void
.end method
