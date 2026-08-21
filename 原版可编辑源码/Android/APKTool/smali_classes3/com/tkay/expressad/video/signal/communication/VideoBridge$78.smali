.class Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/signal/communication/VideoBridge;->getAllCache(Ljava/lang/Object;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/Object;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/expressad/video/signal/communication/VideoBridge;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 1147
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;->c:Lcom/tkay/expressad/video/signal/communication/VideoBridge;

    iput-object p2, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;->a:Ljava/lang/Object;

    iput-object p3, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 1150
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;->c:Lcom/tkay/expressad/video/signal/communication/VideoBridge;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;->a:Ljava/lang/Object;

    iget-object v2, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;->b:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->az(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method
