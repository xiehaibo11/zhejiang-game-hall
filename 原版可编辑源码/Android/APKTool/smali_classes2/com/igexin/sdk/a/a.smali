.class public Lcom/igexin/sdk/a/a;
.super Ljava/lang/Object;


# static fields
.field private static b:Lcom/igexin/sdk/a/a;


# instance fields
.field private a:Lcom/igexin/sdk/IPushCore;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/igexin/sdk/a/a;
    .locals 1

    sget-object v0, Lcom/igexin/sdk/a/a;->b:Lcom/igexin/sdk/a/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/sdk/a/a;

    invoke-direct {v0}, Lcom/igexin/sdk/a/a;-><init>()V

    sput-object v0, Lcom/igexin/sdk/a/a;->b:Lcom/igexin/sdk/a/a;

    :cond_0
    sget-object v0, Lcom/igexin/sdk/a/a;->b:Lcom/igexin/sdk/a/a;

    return-object v0
.end method


# virtual methods
.method public b()V
    .locals 1

    new-instance v0, Lcom/igexin/push/core/stub/PushCore;

    invoke-direct {v0}, Lcom/igexin/push/core/stub/PushCore;-><init>()V

    iput-object v0, p0, Lcom/igexin/sdk/a/a;->a:Lcom/igexin/sdk/IPushCore;

    return-void
.end method

.method public c()Lcom/igexin/sdk/IPushCore;
    .locals 1

    iget-object v0, p0, Lcom/igexin/sdk/a/a;->a:Lcom/igexin/sdk/IPushCore;

    return-object v0
.end method
