.class final Lcom/loc/ae$a;
.super Ljava/lang/Object;
.source "AdvertisingId.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/ae;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private final a:Ljava/lang/String;

.field private final b:Z


# direct methods
.method constructor <init>(Ljava/lang/String;Z)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/loc/ae$a;->a:Ljava/lang/String;

    iput-boolean p2, p0, Lcom/loc/ae$a;->b:Z

    return-void
.end method

.method static synthetic a(Lcom/loc/ae$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/loc/ae$a;->a:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public final a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/loc/ae$a;->b:Z

    return v0
.end method
