.class Lcom/cmic/gen/sdk/e/n$a$2;
.super Ljava/lang/Object;
.source "ThreadUtils.java"

# interfaces
.implements Ljava/lang/Thread$UncaughtExceptionHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/e/n$a;-><init>(Landroid/content/Context;Lcom/cmic/gen/sdk/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/a;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/cmic/gen/sdk/e/n$a;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/e/n$a;Lcom/cmic/gen/sdk/a;Landroid/content/Context;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/cmic/gen/sdk/e/n$a$2;->c:Lcom/cmic/gen/sdk/e/n$a;

    iput-object p2, p0, Lcom/cmic/gen/sdk/e/n$a$2;->a:Lcom/cmic/gen/sdk/a;

    iput-object p3, p0, Lcom/cmic/gen/sdk/e/n$a$2;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V
    .locals 3

    .line 53
    iget-object p1, p0, Lcom/cmic/gen/sdk/e/n$a$2;->a:Lcom/cmic/gen/sdk/a;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/a;->a()Lcom/cmic/gen/sdk/d/b;

    move-result-object p1

    iget-object p1, p1, Lcom/cmic/gen/sdk/d/b;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 54
    iget-object p1, p0, Lcom/cmic/gen/sdk/e/n$a$2;->b:Landroid/content/Context;

    invoke-static {p1}, Lcom/cmic/gen/sdk/auth/c;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/c;

    move-result-object p1

    iget-object p2, p0, Lcom/cmic/gen/sdk/e/n$a$2;->a:Lcom/cmic/gen/sdk/a;

    const-string v0, "200025"

    const-string v1, "\u53d1\u751f\u672a\u77e5\u9519\u8bef"

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v1, p2, v2}, Lcom/cmic/gen/sdk/auth/c;->callBackResult(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    return-void
.end method
