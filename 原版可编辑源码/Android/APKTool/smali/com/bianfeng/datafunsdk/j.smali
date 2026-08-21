.class public Lcom/bianfeng/datafunsdk/j;
.super Ljava/lang/Object;
.source "SelectLastMonthByteDataTask.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field public a:Lcom/bianfeng/datafunsdk/e;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/e;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/j;->a:Lcom/bianfeng/datafunsdk/e;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 1
    invoke-static {}, Lcom/bianfeng/datafunsdk/d;->e()Lcom/bianfeng/datafunsdk/d;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/j;->a:Lcom/bianfeng/datafunsdk/e;

    invoke-static {}, Lcom/bianfeng/datafunsdk/z;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Lcom/bianfeng/datafunsdk/z;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/bianfeng/datafunsdk/d;->a(Lcom/bianfeng/datafunsdk/e;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
