.class final Lcom/mbridge/msdk/rover/b$1;
.super Landroid/os/Handler;
.source "RoverController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/rover/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/rover/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/rover/b;)V
    .locals 0

    .line 23
    iput-object p1, p0, Lcom/mbridge/msdk/rover/b$1;->a:Lcom/mbridge/msdk/rover/b;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 0

    .line 25
    iget-object p1, p0, Lcom/mbridge/msdk/rover/b$1;->a:Lcom/mbridge/msdk/rover/b;

    invoke-static {p1}, Lcom/mbridge/msdk/rover/b;->a(Lcom/mbridge/msdk/rover/b;)V

    return-void
.end method
