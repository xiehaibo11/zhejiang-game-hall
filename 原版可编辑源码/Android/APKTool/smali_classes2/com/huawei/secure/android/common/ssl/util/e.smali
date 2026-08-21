.class public Lcom/huawei/secure/android/common/ssl/util/e;
.super Landroid/os/AsyncTask;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Landroid/content/Context;",
        "Ljava/lang/Integer;",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    const-class v0, Lcom/huawei/secure/android/common/ssl/util/e;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/huawei/secure/android/common/ssl/util/e;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected varargs a([Landroid/content/Context;)Ljava/lang/Boolean;
    .locals 7

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const/4 v2, 0x0

    .line 4
    :try_start_0
    aget-object p1, p1, v2

    invoke-static {p1}, Lcom/huawei/secure/android/common/ssl/util/BksUtil;->getBksFromTss(Landroid/content/Context;)Ljava/io/InputStream;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 6
    sget-object v3, Lcom/huawei/secure/android/common/ssl/util/e;->a:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "doInBackground: exception : "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/huawei/secure/android/common/ssl/util/g;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 8
    :goto_0
    sget-object v3, Lcom/huawei/secure/android/common/ssl/util/e;->a:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "doInBackground: get bks from hms tss cost : "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v0

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " ms"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/huawei/secure/android/common/ssl/util/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 12
    invoke-static {p1}, Lcom/huawei/secure/android/common/ssl/util/f;->a(Ljava/io/InputStream;)V

    const/4 p1, 0x1

    .line 13
    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 15
    :cond_0
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected a(Ljava/lang/Boolean;)V
    .locals 1

    .line 16
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 17
    sget-object p1, Lcom/huawei/secure/android/common/ssl/util/e;->a:Ljava/lang/String;

    const-string v0, "onPostExecute: upate done"

    invoke-static {p1, v0}, Lcom/huawei/secure/android/common/ssl/util/g;->c(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 19
    :cond_0
    sget-object p1, Lcom/huawei/secure/android/common/ssl/util/e;->a:Ljava/lang/String;

    const-string v0, "onPostExecute: upate failed"

    invoke-static {p1, v0}, Lcom/huawei/secure/android/common/ssl/util/g;->b(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method protected varargs a([Ljava/lang/Integer;)V
    .locals 1

    .line 20
    sget-object p1, Lcom/huawei/secure/android/common/ssl/util/e;->a:Ljava/lang/String;

    const-string v0, "onProgressUpdate"

    invoke-static {p1, v0}, Lcom/huawei/secure/android/common/ssl/util/g;->c(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 1
    check-cast p1, [Landroid/content/Context;

    invoke-virtual {p0, p1}, Lcom/huawei/secure/android/common/ssl/util/e;->a([Landroid/content/Context;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 1
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/huawei/secure/android/common/ssl/util/e;->a(Ljava/lang/Boolean;)V

    return-void
.end method

.method protected onPreExecute()V
    .locals 2

    .line 1
    sget-object v0, Lcom/huawei/secure/android/common/ssl/util/e;->a:Ljava/lang/String;

    const-string v1, "onPreExecute"

    invoke-static {v0, v1}, Lcom/huawei/secure/android/common/ssl/util/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected bridge synthetic onProgressUpdate([Ljava/lang/Object;)V
    .locals 0

    .line 1
    check-cast p1, [Ljava/lang/Integer;

    invoke-virtual {p0, p1}, Lcom/huawei/secure/android/common/ssl/util/e;->a([Ljava/lang/Integer;)V

    return-void
.end method
