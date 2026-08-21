.class public Lcom/bianfeng/datafunsdk/PostDatalib$a$c;
.super Ljava/lang/Object;
.source "PostDatalib.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/PostDatalib$a;->a(Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Ljava/util/List;

.field public final synthetic b:Lcom/bianfeng/datafunsdk/PostDatalib$a;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Ljava/util/List;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$c;->b:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iput-object p2, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$c;->a:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PostDatalib \u63d2\u5165\u6570\u636e\u5931\u8d25--"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$c;->a:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$c;->b:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iget-object v0, v0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$c;->a:Ljava/util/List;

    invoke-static {v0, v1}, Lcom/bianfeng/datafunsdk/PostDatalib;->access$100(Lcom/bianfeng/datafunsdk/PostDatalib;Ljava/util/List;)V

    return-void
.end method
