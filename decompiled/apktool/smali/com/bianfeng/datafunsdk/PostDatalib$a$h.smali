.class public Lcom/bianfeng/datafunsdk/PostDatalib$a$h;
.super Ljava/lang/Object;
.source "PostDatalib.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/PostDatalib$a;->a(Lcom/bianfeng/datafunsdk/o;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/o;

.field public final synthetic b:Lcom/bianfeng/datafunsdk/PostDatalib$a;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;Lcom/bianfeng/datafunsdk/o;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$h;->b:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iput-object p2, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$h;->a:Lcom/bianfeng/datafunsdk/o;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    const-string v0, "PostDatalib  \u4e0a\u4f20\u5931\u8d25\uff0c\u91cd\u590d\u4e0a\u629b"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$h;->b:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iget-object v0, v0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$h;->a:Lcom/bianfeng/datafunsdk/o;

    invoke-static {v0, v1}, Lcom/bianfeng/datafunsdk/PostDatalib;->access$600(Lcom/bianfeng/datafunsdk/PostDatalib;Lcom/bianfeng/datafunsdk/o;)V

    return-void
.end method
