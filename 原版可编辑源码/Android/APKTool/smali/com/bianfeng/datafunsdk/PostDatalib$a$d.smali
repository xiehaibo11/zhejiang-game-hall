.class public Lcom/bianfeng/datafunsdk/PostDatalib$a$d;
.super Ljava/lang/Object;
.source "PostDatalib.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/PostDatalib$a;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/PostDatalib$a;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$d;->a:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    const-string v0, "PostDatalib \u67e5\u8be2\u65e0\u7ed3\u679c--"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$d;->a:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iget-object v0, v0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/PostDatalib;->cancelTimer()V

    .line 3
    invoke-static {}, Lcom/bianfeng/datafunsdk/y;->a()I

    move-result v0

    .line 4
    sget-object v1, Lcom/bianfeng/datafunsdk/g;->b:Lcom/bianfeng/datafunsdk/g;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 5
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$d;->a:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iget-object v0, v0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/PostDatalib;->access$200(Lcom/bianfeng/datafunsdk/PostDatalib;)V

    :cond_0
    return-void
.end method
