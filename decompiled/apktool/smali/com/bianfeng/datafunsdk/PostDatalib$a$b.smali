.class public Lcom/bianfeng/datafunsdk/PostDatalib$a$b;
.super Ljava/lang/Object;
.source "PostDatalib.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/PostDatalib$a;->b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

.field public final synthetic b:Lcom/bianfeng/datafunsdk/PostDatalib$a;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$b;->b:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iput-object p2, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$b;->a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    const-string v0, "PostDatalib \u63d2\u5165\u6570\u636e\u5931\u8d25--"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$b;->b:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iget-object v0, v0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$b;->a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    invoke-static {v0, v1}, Lcom/bianfeng/datafunsdk/PostDatalib;->access$000(Lcom/bianfeng/datafunsdk/PostDatalib;Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method
