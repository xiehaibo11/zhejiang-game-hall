.class final Lcom/mbridge/msdk/system/a$3;
.super Ljava/lang/Object;
.source "MBridgeSDKImpl.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/system/a;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/system/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/system/a;)V
    .locals 0

    .line 287
    iput-object p1, p0, Lcom/mbridge/msdk/system/a$3;->a:Lcom/mbridge/msdk/system/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 290
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 291
    invoke-static {}, Lcom/mbridge/msdk/c/b/a;->a()Lcom/mbridge/msdk/c/b/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b/a;->e()V

    .line 292
    invoke-static {}, Landroid/os/Looper;->loop()V

    return-void
.end method
