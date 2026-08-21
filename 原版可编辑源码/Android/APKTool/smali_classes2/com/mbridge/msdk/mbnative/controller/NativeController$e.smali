.class final Lcom/mbridge/msdk/mbnative/controller/NativeController$e;
.super Landroid/os/Handler;
.source "NativeController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbnative/controller/NativeController;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "e"
.end annotation


# instance fields
.field private a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/mbridge/msdk/mbnative/controller/NativeController;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;)V
    .locals 1

    .line 164
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    .line 165
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 4

    .line 170
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 172
    :try_start_0
    iget v0, p1, Landroid/os/Message;->what:I

    if-nez v0, :cond_0

    .line 173
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->a:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 174
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;

    if-eqz v0, :cond_0

    .line 176
    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/foundation/same/report/d;

    move-result-object v0

    iget v1, p1, Landroid/os/Message;->arg1:I

    iget-object v2, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/d;->a(ILjava/lang/String;)V

    .line 180
    :cond_0
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_3

    const/4 p1, 0x0

    .line 182
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->a:Ljava/lang/ref/WeakReference;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 183
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;

    :cond_1
    if-eqz p1, :cond_3

    .line 186
    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z

    .line 187
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object v0

    const-string v1, "time out return"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 188
    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v1

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v0, v1, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Ljava/lang/String;ILjava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 189
    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result v1

    if-eqz v1, :cond_2

    return-void

    .line 192
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "time out return isReturn = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 193
    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 197
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method
