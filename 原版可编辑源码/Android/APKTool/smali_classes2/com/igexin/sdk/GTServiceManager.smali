.class public Lcom/igexin/sdk/GTServiceManager;
.super Ljava/lang/Object;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/igexin/sdk/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/sdk/GTServiceManager;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/igexin/sdk/GTServiceManager;
    .locals 1

    invoke-static {}, Lcom/igexin/sdk/c;->a()Lcom/igexin/sdk/GTServiceManager;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public onActivityCreate(Landroid/app/Activity;)V
    .locals 1

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/x;->a(Landroid/app/Activity;)V

    return-void
.end method
