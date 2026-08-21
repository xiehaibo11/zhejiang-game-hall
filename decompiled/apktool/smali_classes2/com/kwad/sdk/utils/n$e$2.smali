.class final Lcom/kwad/sdk/utils/n$e$2;
.super Lcom/kwad/sdk/k/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/n$e;->HW()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aIj:Lcom/kwad/sdk/utils/n$e;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/utils/n$e;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/n$e$2;->aIj:Lcom/kwad/sdk/utils/n$e;

    invoke-direct {p0, p2}, Lcom/kwad/sdk/k/a/a;-><init>(Z)V

    return-void
.end method


# virtual methods
.method public final bB(Landroid/content/Context;)Z
    .locals 9

    :try_start_0
    new-instance p1, Ljava/lang/Exception;

    const-string v0, "empty"

    invoke-direct {p1, v0}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object p1

    array-length v0, p1

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :goto_0
    if-ge v1, v0, :cond_4

    aget-object v4, p1, v1

    invoke-virtual {v4}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v4

    const-string v6, "com.android.internal.os.ZygoteInit"

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    const/4 v7, 0x1

    if-eqz v6, :cond_0

    add-int/lit8 v3, v3, 0x1

    const/4 v6, 0x2

    if-ne v3, v6, :cond_0

    move v2, v7

    :cond_0
    const-string v6, "com.saurik.substrate.MS$2"

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1

    const-string v6, "invoked"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1

    const-string v2, "HookDetection"

    const-string v6, "A method on the stack trace has been hooked using Substrate."

    invoke-static {v2, v6}, Landroid/util/Log;->wtf(Ljava/lang/String;Ljava/lang/String;)I

    move v2, v7

    :cond_1
    const-string v6, "de.robv.android.xposed.XposedBridge"

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_2

    const-string v8, "main"

    invoke-virtual {v4, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_2

    move v2, v7

    :cond_2
    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const-string v5, "handleHookedMethod"

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_3

    move v2, v7

    :cond_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    return v2
.end method
