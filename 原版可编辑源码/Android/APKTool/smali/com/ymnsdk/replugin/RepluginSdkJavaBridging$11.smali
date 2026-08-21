.class final Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$11;
.super Ljava/lang/Object;
.source "RepluginSdkJavaBridging.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->allowStartPlugin(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 486
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public openFail(Ljava/lang/String;)V
    .locals 1

    .line 495
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$2000()I

    move-result v0

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    const/4 p1, 0x0

    .line 496
    sput-boolean p1, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isAllowing:Z

    return-void
.end method

.method public openSuccess()V
    .locals 2

    .line 489
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$1900()I

    move-result v0

    const-string v1, "\u6253\u5f00\u6210\u529f"

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    const/4 v0, 0x0

    .line 490
    sput-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isAllowing:Z

    return-void
.end method
