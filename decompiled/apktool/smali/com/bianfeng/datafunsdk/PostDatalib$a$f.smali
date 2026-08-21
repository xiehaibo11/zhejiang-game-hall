.class public Lcom/bianfeng/datafunsdk/PostDatalib$a$f;
.super Ljava/lang/Object;
.source "PostDatalib.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/PostDatalib$a;->a(Lcom/bianfeng/datafunsdk/f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/f;

.field public final synthetic b:Lcom/bianfeng/datafunsdk/PostDatalib$a;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Lcom/bianfeng/datafunsdk/f;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$f;->b:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iput-object p2, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$f;->a:Lcom/bianfeng/datafunsdk/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    const-string v0, "PostDatalib  \u5220\u9664\u5931\u8d25\uff0c=====\u8981\u5220\u9664--"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$f;->b:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iget-object v0, v0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$f;->a:Lcom/bianfeng/datafunsdk/f;

    invoke-static {v0, v1}, Lcom/bianfeng/datafunsdk/PostDatalib;->access$400(Lcom/bianfeng/datafunsdk/PostDatalib;Lcom/bianfeng/datafunsdk/f;)V

    return-void
.end method
