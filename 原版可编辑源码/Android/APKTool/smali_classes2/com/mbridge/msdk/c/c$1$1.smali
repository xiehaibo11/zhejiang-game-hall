.class final Lcom/mbridge/msdk/c/c$1$1;
.super Ljava/lang/Object;
.source "SettingRequestController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/c/c$1;->a(Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/c/c$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/c/c$1;)V
    .locals 0

    .line 111
    iput-object p1, p0, Lcom/mbridge/msdk/c/c$1$1;->a:Lcom/mbridge/msdk/c/c$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 114
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 115
    invoke-static {}, Lcom/mbridge/msdk/c/b/a;->a()Lcom/mbridge/msdk/c/b/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b/a;->e()V

    .line 116
    invoke-static {}, Landroid/os/Looper;->loop()V

    return-void
.end method
