.class public Lcom/bianfeng/datafunsdk/PostDatalib$a;
.super Ljava/lang/Object;
.source "PostDatalib.java"

# interfaces
.implements Lcom/bianfeng/datafunsdk/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/datafunsdk/PostDatalib;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/PostDatalib;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/PostDatalib;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    .line 6
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a$e;

    invoke-direct {v0, p0}, Lcom/bianfeng/datafunsdk/PostDatalib$a$e;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;)V

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/u;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 2

    .line 7
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PostDatalib \u5220\u9664\u6210\u529f--"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getId()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/f;)V
    .locals 1

    .line 8
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a$f;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib$a$f;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Lcom/bianfeng/datafunsdk/f;)V

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/u;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/o;)V
    .locals 1

    .line 9
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a$h;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib$a$h;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Lcom/bianfeng/datafunsdk/o;)V

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/u;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public a(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/datafunsdk/bean/DataFunBean;",
            ">;)V"
        }
    .end annotation

    .line 1
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    .line 2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PostDatalib \u67e5\u8be2\u5230\u6570\u636e\u6210\u529f--"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 5
    :cond_0
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a$c;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib$a$c;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Ljava/util/List;)V

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/u;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public b()V
    .locals 1

    .line 2
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a$d;

    invoke-direct {v0, p0}, Lcom/bianfeng/datafunsdk/PostDatalib$a$d;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;)V

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/u;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a$b;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib$a$b;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/u;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public c(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a$a;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib$a$a;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/u;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public d(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a$g;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib$a$g;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/u;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public e(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PostDatalib \u4e0a\u4f20\u5931\u8d25 id=="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getId()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->startTimer()V

    return-void
.end method

.method public f(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PostDatalib \u5220\u9664\u5931\u8d25 \u8d85\u8fc7\u4e09\u6b21\u4e86 id=="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getId()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    return-void
.end method
