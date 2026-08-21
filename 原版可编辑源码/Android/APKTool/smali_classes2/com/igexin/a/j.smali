.class Lcom/igexin/a/j;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/FilenameFilter;


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/igexin/a/i;


# direct methods
.method constructor <init>(Lcom/igexin/a/i;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/a/j;->b:Lcom/igexin/a/i;

    iput-object p2, p0, Lcom/igexin/a/j;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public accept(Ljava/io/File;Ljava/lang/String;)Z
    .locals 0

    iget-object p1, p0, Lcom/igexin/a/j;->a:Ljava/lang/String;

    invoke-virtual {p2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method
