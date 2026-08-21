.class final Lcom/qihoo360/loader2/alc/ActivityController$2;
.super Ljava/lang/Object;
.source "ActivityController.java"

# interfaces
.implements Ljava/lang/reflect/InvocationHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/alc/ActivityController;->install4x(Landroid/app/Application;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 177
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public invoke(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    .line 181
    invoke-virtual {p2}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object p1

    const-string v0, "onActivityCreated"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    const-string v0, " total="

    const-string v1, "ws000"

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    .line 182
    array-length p1, p3

    if-lez p1, :cond_5

    aget-object p1, p3, v2

    instance-of p1, p1, Landroid/app/Activity;

    if-eqz p1, :cond_5

    .line 183
    aget-object p1, p3, v2

    check-cast p1, Landroid/app/Activity;

    .line 184
    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    .line 185
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$300()Ljava/util/ArrayList;

    move-result-object p3

    invoke-virtual {p3, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 186
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_5

    .line 187
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "onActivityCreated: a="

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$300()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_1

    .line 190
    :cond_0
    invoke-virtual {p2}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object p1

    const-string p2, "onActivityDestroyed"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 191
    array-length p1, p3

    if-lez p1, :cond_5

    aget-object p1, p3, v2

    instance-of p1, p1, Landroid/app/Activity;

    if-eqz p1, :cond_5

    .line 192
    aget-object p1, p3, v2

    check-cast p1, Landroid/app/Activity;

    .line 193
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$300()Ljava/util/ArrayList;

    move-result-object p2

    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result p2

    add-int/lit8 p2, p2, -0x1

    :goto_0
    if-ltz p2, :cond_3

    .line 194
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$300()Ljava/util/ArrayList;

    move-result-object p3

    invoke-virtual {p3, p2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/ref/WeakReference;

    invoke-virtual {p3}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Landroid/app/Activity;

    if-eq p3, p1, :cond_1

    if-nez p3, :cond_2

    .line 196
    :cond_1
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$300()Ljava/util/ArrayList;

    move-result-object p3

    invoke-virtual {p3, p2}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    :cond_2
    add-int/lit8 p2, p2, -0x1

    goto :goto_0

    .line 199
    :cond_3
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_4

    .line 200
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "onActivityDestroyed: a="

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$300()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 202
    :cond_4
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$200()Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 203
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$200()Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;

    move-result-object p1

    invoke-interface {p1}, Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;->handleActivityUpdate()V

    :cond_5
    :goto_1
    const/4 p1, 0x0

    return-object p1
.end method
