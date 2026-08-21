.class Lcom/sigmob/sdk/base/utils/a$a;
.super Landroid/os/AsyncTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/utils/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/String;",
        "Ljava/lang/Void;",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# instance fields
.field private final a:Ljava/io/File;

.field private final b:Ljava/io/File;

.field private final c:Lcom/sigmob/sdk/base/utils/a$b;


# direct methods
.method constructor <init>(Ljava/io/File;Ljava/io/File;Lcom/sigmob/sdk/base/utils/a$b;)V
    .locals 0

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/base/utils/a$a;->a:Ljava/io/File;

    iput-object p1, p0, Lcom/sigmob/sdk/base/utils/a$a;->b:Ljava/io/File;

    iput-object p3, p0, Lcom/sigmob/sdk/base/utils/a$a;->c:Lcom/sigmob/sdk/base/utils/a$b;

    return-void
.end method


# virtual methods
.method protected a([Ljava/lang/String;)Ljava/lang/Boolean;
    .locals 1

    :try_start_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/utils/a$a;->a:Ljava/io/File;

    iget-object v0, p0, Lcom/sigmob/sdk/base/utils/a$a;->b:Ljava/io/File;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/utils/a;->a(Ljava/io/File;Ljava/io/File;)Ljava/util/List;

    const/4 p1, 0x1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p1, 0x0

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected a(Ljava/lang/Boolean;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/utils/a$a;->c:Lcom/sigmob/sdk/base/utils/a$b;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/utils/a$b;->a(Z)V

    :cond_0
    return-void
.end method

.method protected synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/utils/a$a;->a([Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/utils/a$a;->a(Ljava/lang/Boolean;)V

    return-void
.end method
